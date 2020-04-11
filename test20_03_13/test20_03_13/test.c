#define _CRT_SECURE_NO_WARNINGS 1  
#include<stdio.h>
#include<assert.h>
#include<string.h>
/************************************* 打印一个整数的每一位**************************************************/
//递归思路
//Print_bit（326）
//Print_bit（326/10）  打印326%10
//Print_bit（32/10）   打印32%10  打印326%10
//Print_bit（3）       打印32%10  打印326%10  即：
//打印3                打印2      打印6

// void Print_bit(int num)
//{
//	if(num>9)//两位数以上进行递归 
//	{
//		Print_bit(num/10);
//	}
//	printf("%d ", num % 10);//直至一位数时打印
//
//}
//int main()
//{
//	int num = 0;
//	printf("请输入要打印的数：\n");
//	scanf("%d", &num);
//	Print_bit(num);
//	return 0;
//}

/************************************* n的阶乘（不考虑溢出的问题）*******************************************/

//int Factorial1(int n) //非递归法
//{
//	assert(n > 0);//负数没有阶乘
//	int res = 1;
//	for (int i = n; i > 1; --i)
//	{
//		res *= i;
//	}
//	return res;
//}
//
////递归思路
////Factorial2（3）
////3*Factorial2（3-1）
////3 * 2 * Factorial2（2-1）即：
////3 * 2 * 1 
//
//
//int Factorial2(int n) //递归法
//{
//	assert(n > 0);//负数没有阶乘
//	if (n <= 1)//0和1的阶乘为1
//	{
//		return 1;
//	}
//	else
//	{
//		return n*Factorial2(n - 1);//大于1的进行递归
//	}
//}
//int main()
//{
//
//	int n = 0,Res1 = 0,Res2 = 0;
//	printf("请输入要计算的数阶乘：\n");
//	scanf("%d", &n);   // n超过12就会溢出
//	Res1 = Factorial1(n);
//	Res2 = Factorial2(n);
//	printf("Res1=%d Res2=%d\n", Res1,Res2);
//	return 0;
//}


/************************************* my_strlen *************************************************************/

//int my_strlen1(char* arr)//计数法
//{
//	int leng=0;
//	while (0 != *arr)//直至访问到\0
//	{
//		leng++;
//      arr++
//	}
//	return leng;
//}
//
//递归思路
//my_strlen2（'abc'）
//1+my_strlen2（'bc'）
//1 + 1 + my_strlen2（'c'）
//1 + 1 + 1 + my_strlen2（'\0'）即：
//1 + 1 + 1 + 0
//
//
//int  my_strlen2(const char* arr)//递归法
//{
//	if (0 == *arr)
//		return 0;
//	else 
//		return 1 + my_strlen2(arr+1);
//	    //注意这里不能写成 (arr++);? 会崩溃
//
//}
//
//int  my_strlen3(char* arr)//指针-指针法
//{
//	char* p = arr;
//	while (0 != *p)
//	{
//		p++;
//	}
//	return p - arr;//指针-指针得到的是指针之间元素个数
//}
//
//int  my_strlen4(const char* arr) //standard
//{
//	int leng = 0;
//	assert(arr != NULL); //断言 & const保护参数
//	while (*arr)
//	{
//		arr++;
//		leng++;
//	}
//	return leng;
//}
//
//int main()
//{
//	
//	
//	char arr[20] = {0};
//	int leng = 0;
//	printf("请输入要计算的字符串：\n");
//	gets(arr); //获取字符串
//
//	leng= my_strlen1(arr);  //计数法
//	leng = my_strlen2(arr);   //递归法
//	leng = my_strlen3(arr);   //指针-指针法
//	leng = my_strlen4(arr);   //standard
//
//	printf("该段字符串的有效长度leng=%d\n", leng);
//	return 0;
//
//}

/************************************* 字符串逆序 ************************************************************/
//int  my_strlen(const char* arr) //standard
//{
//	int leng = 0;
//	assert(arr != NULL); //断言 & const保护参数
//	while (*arr)
//	{
//		arr++;
//		leng++;
//	}
//	return leng;
//}
//void revers_string1(char arr[])//交换法
//{
//	char temp = 0;
//	int  left=0;
//	int  right = my_strlen(arr) - 1;
//	while (left<right)
//	{
//		
//		temp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = temp;
//		left++;
//		right--;
//	}
//}
//
//void revers_string2(char arr[]) //递归法
//{
//	char temp = arr[0];   //(1)首元素放临时变量中
//	int leng = my_strlen(arr);
//	arr[0] = arr[leng - 1];  //(2)末尾处元素放至首元素处
//	arr[leng - 1] ='\0';  
//	if (my_strlen(arr+1) >= 2)
//	{
//		revers_string2(arr+1);  //(3)赋\0后判断是否再递归
//	}
//	arr[leng - 1] = temp;  //(4)将临时变量中最后放至末尾处
//}
//int main()
//{
//	char arr[20];
//	printf("请输入逆序的字符串：\n");
//	gets(arr);
//	
//	//revers_string1(arr);//交换法
//	revers_string2(arr);//递归法
//
//	printf("逆序后：%s\n", arr);
//	//puts(arr);
//	return 0;
//
//}


