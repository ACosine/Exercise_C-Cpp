#include"sysframe.h"
/**************************���ù������λ��****************************************************/
void SetCurPos(int x, int y)
{
	COORD pos = { x, y };                             //���� ���λ�ýṹ�����pos
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);  //��ȡ����̨���
	SetConsoleCursorPosition(handle, pos);            //���ù��λ��
}
/*****************************���ع��******************************************************/
void HideCursor()
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);   //��ȡ����̨���
	CONSOLE_CURSOR_INFO  cursor_info = { 1, 0 };      //���� �����Ϣ�ṹ��ָ�����cursor_info  {���ٷֱȴ�С���Ƿ�ɼ�}  0���ɼ���1�ɼ�
	SetConsoleCursorInfo(handle, &cursor_info);      //���ÿ���̨�����Ϣ���� 
}
/******************************��ʾ���*******************************************************/
void RecoverCursor()
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE); //��ȡ����̨���
	CONSOLE_CURSOR_INFO  cursor_info = { 100, 1 };//���� �����Ϣ�ṹ��ָ�����cursor_info  {���ٷֱȴ�С���Ƿ�ɼ�}0���ɼ���1�ɼ�
	SetConsoleCursorInfo(handle, &cursor_info); //���ÿ���̨�����Ϣ����
}
/*******************************���������****************************************************/
void DrawRow(int x, int y)
{
	for (int i = 0; i<56; ++i)
	{
		SetCurPos(x + i, y);  //��������x�ı䣬y����
		printf("=");
	}
}
/*********************************���������***************************************************/
void DrawCol(int x, int y)
{
	for (int i = 0; i<20; ++i)
	{
		SetCurPos(x, y + i);  //��������y�ı䣬x����
		printf("||");
	}
}
/*************************************��������*******************************************/
void DrawFrame(const char *title)
{
	char buf[MAX_BUFFER_SIZE] = { 0 };
	strcat(buf, "title ");         //  "title "���buf����,��buf�д����ַ���"title "
	strcat(buf, title);            // title������buf����,���ַ���"title "���ӱ���buf
	//���ñ���
	system(buf);                  //system("title �����֤��ѯϵͳ")

	//���ô��ڿ��
	system("mode con cols=60 lines=20");

	DrawCol(0, 0);    //������
	DrawCol(58, 0);   //������
	DrawRow(2, 0);    //������
	DrawRow(2, 2);    //������
	DrawRow(2, 16);   //������
	DrawRow(2, 18);   //������

	
	//���û�ӭ��Ϣ
	SetCurPos((56 - strlen(title)) / 2, 1);                //���ù������λ��
	printf("%s", title);                                   //�ڸ�λ�ô���ӡ����"�����֤��ѯϵͳ"
	SetCurPos((56 - strlen("-�� �� �� ��-")) / 2, 7);      //���ù������λ��
	printf("%s", "-�� �� �� ��-");                         //�ڸ�λ�ô���ӡ-�� �� �� ��-
    char welcome_info[] = "W e l C o m e  !";
	SetCurPos((56 - strlen(welcome_info)) / 2, 9);        //���ù������λ��

	HideCursor();                                        //������ʾW e l C o m e  !
	for (int i = 0; i<strlen(welcome_info); ++i) 
		{
			printf("%c", welcome_info[i]);
			Sleep(100);
		}

	RecoverCursor();
	//����ϵͳ��Ϣ                                                  
	SetCurPos((56 - strlen("[1] ���֤�����ز�ѯ")) / 2, 7);    	//���ù������λ��
	printf("%s", "[1] ���֤�����ز�ѯ");							//�ڸ�λ�ô���ӡ"[1] ���֤�����ز�ѯ"
	SetCurPos((56 - strlen("[2] ���֤�Ϸ�����֤")) / 2, 9);        //���ù������λ��
	printf("%s", "[2] ���֤�Ϸ�����֤");						    //�ڸ�λ�ô���ӡ"[2] ���֤�Ϸ�����֤"
	
	DrawRow(2, 14);     //���������

	SetCurPos((56 - strlen("exit �˳�ϵͳ")) / 2, 17);               //���ù������λ��
	printf("%s", "exit �˳�ϵͳ");						             //�ڸ�λ�ô���ӡ"exit �˳�ϵͳ"

	char buffer[128];
	SetCurPos((56 - strlen("������:>")) / 2, 15);                   //���ù������λ��
	printf("%s", "������:>");										//�ڸ�λ�ô���ӡ"������:>"
	scanf("%s", buffer);                                            //������������

}
/********************************���ý���λ��**************************************************/
void SystemEnd()
{
	SetCurPos(2, 19);
	//printf("%s","�밴���������...");
	//system("pause");
}