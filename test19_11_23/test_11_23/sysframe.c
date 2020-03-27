#include"sysframe.h"
/**************************设置光标所在位置****************************************************/
void SetCurPos(int x, int y)
{
	COORD pos = { x, y };                             //定义 光标位置结构体变量pos
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);  //获取控制台句柄
	SetConsoleCursorPosition(handle, pos);            //设置光标位置
}
/*****************************隐藏光标******************************************************/
void HideCursor()
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);   //获取控制台句柄
	CONSOLE_CURSOR_INFO  cursor_info = { 1, 0 };      //定义 光标信息结构体指针变量cursor_info  {光标百分比大小，是否可见}  0不可见，1可见
	SetConsoleCursorInfo(handle, &cursor_info);      //设置控制台光标信息函数 
}
/******************************显示光标*******************************************************/
void RecoverCursor()
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE); //获取控制台句柄
	CONSOLE_CURSOR_INFO  cursor_info = { 100, 1 };//定义 光标信息结构体指针变量cursor_info  {光标百分比大小，是否可见}0不可见，1可见
	SetConsoleCursorInfo(handle, &cursor_info); //设置控制台光标信息函数
}
/*******************************画框架行线****************************************************/
void DrawRow(int x, int y)
{
	for (int i = 0; i<56; ++i)
	{
		SetCurPos(x + i, y);  //设置行线x改变，y不变
		printf("=");
	}
}
/*********************************画框架列线***************************************************/
void DrawCol(int x, int y)
{
	for (int i = 0; i<20; ++i)
	{
		SetCurPos(x, y + i);  //设置列线y改变，x不变
		printf("||");
	}
}
/*************************************画整体框架*******************************************/
void DrawFrame(const char *title)
{
	char buf[MAX_BUFFER_SIZE] = { 0 };
	strcat(buf, "title ");         //  "title "与空buf连接,即buf中存了字符串"title "
	strcat(buf, title);            // title变量与buf连接,即字符串"title "连接变量buf
	//设置标题
	system(buf);                  //system("title 身份验证查询系统")

	//设置窗口宽高
	system("mode con cols=60 lines=20");

	DrawCol(0, 0);    //画列线
	DrawCol(58, 0);   //画列线
	DrawRow(2, 0);    //画行线
	DrawRow(2, 2);    //画行线
	DrawRow(2, 16);   //画行线
	DrawRow(2, 18);   //画行线

	
	//设置欢迎信息
	SetCurPos((56 - strlen(title)) / 2, 1);                //设置光标所在位置
	printf("%s", title);                                   //在该位置处打印标题"身份验证查询系统"
	SetCurPos((56 - strlen("-比 特 科 技-")) / 2, 7);      //设置光标所在位置
	printf("%s", "-比 特 科 技-");                         //在该位置处打印-比 特 科 技-
    char welcome_info[] = "W e l C o m e  !";
	SetCurPos((56 - strlen(welcome_info)) / 2, 9);        //设置光标所在位置

	HideCursor();                                        //闪动显示W e l C o m e  !
	for (int i = 0; i<strlen(welcome_info); ++i) 
		{
			printf("%c", welcome_info[i]);
			Sleep(100);
		}

	RecoverCursor();
	//设置系统信息                                                  
	SetCurPos((56 - strlen("[1] 身份证归属地查询")) / 2, 7);    	//设置光标所在位置
	printf("%s", "[1] 身份证归属地查询");							//在该位置处打印"[1] 身份证归属地查询"
	SetCurPos((56 - strlen("[2] 身份证合法性验证")) / 2, 9);        //设置光标所在位置
	printf("%s", "[2] 身份证合法性验证");						    //在该位置处打印"[2] 身份证合法性验证"
	
	DrawRow(2, 14);     //画框架行线

	SetCurPos((56 - strlen("exit 退出系统")) / 2, 17);               //设置光标所在位置
	printf("%s", "exit 退出系统");						             //在该位置处打印"exit 退出系统"

	char buffer[128];
	SetCurPos((56 - strlen("请输入:>")) / 2, 15);                   //设置光标所在位置
	printf("%s", "请输入:>");										//在该位置处打印"请输入:>"
	scanf("%s", buffer);                                            //键盘输入序列

}
/********************************设置结束位置**************************************************/
void SystemEnd()
{
	SetCurPos(2, 19);
	//printf("%s","请按任意键结束...");
	//system("pause");
}