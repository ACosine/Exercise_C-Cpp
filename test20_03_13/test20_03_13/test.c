#define _CRT_SECURE_NO_WARNINGS 1  
#include<stdio.h>
#include<assert.h>
#include<string.h>
/************************************* ��ӡһ��������ÿһλ**************************************************/
//�ݹ�˼·
//Print_bit��326��
//Print_bit��326/10��  ��ӡ326%10
//Print_bit��32/10��   ��ӡ32%10  ��ӡ326%10
//Print_bit��3��       ��ӡ32%10  ��ӡ326%10  ����
//��ӡ3                ��ӡ2      ��ӡ6

// void Print_bit(int num)
//{
//	if(num>9)//��λ�����Ͻ��еݹ� 
//	{
//		Print_bit(num/10);
//	}
//	printf("%d ", num % 10);//ֱ��һλ��ʱ��ӡ
//
//}
//int main()
//{
//	int num = 0;
//	printf("������Ҫ��ӡ������\n");
//	scanf("%d", &num);
//	Print_bit(num);
//	return 0;
//}

/************************************* n�Ľ׳ˣ���������������⣩*******************************************/

//int Factorial1(int n) //�ǵݹ鷨
//{
//	assert(n > 0);//����û�н׳�
//	int res = 1;
//	for (int i = n; i > 1; --i)
//	{
//		res *= i;
//	}
//	return res;
//}
//
////�ݹ�˼·
////Factorial2��3��
////3*Factorial2��3-1��
////3 * 2 * Factorial2��2-1������
////3 * 2 * 1 
//
//
//int Factorial2(int n) //�ݹ鷨
//{
//	assert(n > 0);//����û�н׳�
//	if (n <= 1)//0��1�Ľ׳�Ϊ1
//	{
//		return 1;
//	}
//	else
//	{
//		return n*Factorial2(n - 1);//����1�Ľ��еݹ�
//	}
//}
//int main()
//{
//
//	int n = 0,Res1 = 0,Res2 = 0;
//	printf("������Ҫ��������׳ˣ�\n");
//	scanf("%d", &n);   // n����12�ͻ����
//	Res1 = Factorial1(n);
//	Res2 = Factorial2(n);
//	printf("Res1=%d Res2=%d\n", Res1,Res2);
//	return 0;
//}


/************************************* my_strlen *************************************************************/

//int my_strlen1(char* arr)//������
//{
//	int leng=0;
//	while (0 != *arr)//ֱ�����ʵ�\0
//	{
//		leng++;
//      arr++
//	}
//	return leng;
//}
//
//�ݹ�˼·
//my_strlen2��'abc'��
//1+my_strlen2��'bc'��
//1 + 1 + my_strlen2��'c'��
//1 + 1 + 1 + my_strlen2��'\0'������
//1 + 1 + 1 + 0
//
//
//int  my_strlen2(const char* arr)//�ݹ鷨
//{
//	if (0 == *arr)
//		return 0;
//	else 
//		return 1 + my_strlen2(arr+1);
//	    //ע�����ﲻ��д�� (arr++);? �����
//
//}
//
//int  my_strlen3(char* arr)//ָ��-ָ�뷨
//{
//	char* p = arr;
//	while (0 != *p)
//	{
//		p++;
//	}
//	return p - arr;//ָ��-ָ��õ�����ָ��֮��Ԫ�ظ���
//}
//
//int  my_strlen4(const char* arr) //standard
//{
//	int leng = 0;
//	assert(arr != NULL); //���� & const��������
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
//	printf("������Ҫ������ַ�����\n");
//	gets(arr); //��ȡ�ַ���
//
//	leng= my_strlen1(arr);  //������
//	leng = my_strlen2(arr);   //�ݹ鷨
//	leng = my_strlen3(arr);   //ָ��-ָ�뷨
//	leng = my_strlen4(arr);   //standard
//
//	printf("�ö��ַ�������Ч����leng=%d\n", leng);
//	return 0;
//
//}

/************************************* �ַ������� ************************************************************/
//int  my_strlen(const char* arr) //standard
//{
//	int leng = 0;
//	assert(arr != NULL); //���� & const��������
//	while (*arr)
//	{
//		arr++;
//		leng++;
//	}
//	return leng;
//}
//void revers_string1(char arr[])//������
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
//void revers_string2(char arr[]) //�ݹ鷨
//{
//	char temp = arr[0];   //(1)��Ԫ�ط���ʱ������
//	int leng = my_strlen(arr);
//	arr[0] = arr[leng - 1];  //(2)ĩβ��Ԫ�ط�����Ԫ�ش�
//	arr[leng - 1] ='\0';  
//	if (my_strlen(arr+1) >= 2)
//	{
//		revers_string2(arr+1);  //(3)��\0���ж��Ƿ��ٵݹ�
//	}
//	arr[leng - 1] = temp;  //(4)����ʱ������������ĩβ��
//}
//int main()
//{
//	char arr[20];
//	printf("������������ַ�����\n");
//	gets(arr);
//	
//	//revers_string1(arr);//������
//	revers_string2(arr);//�ݹ鷨
//
//	printf("�����%s\n", arr);
//	//puts(arr);
//	return 0;
//
//}


