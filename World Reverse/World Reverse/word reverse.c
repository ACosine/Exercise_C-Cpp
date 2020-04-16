#define _CRT_SECURE_NO_WARNINGS 1  
#include<stdio.h>
#include<string.h>
void Reverse_String(char *s, int start, int leng)
{
	char temp = 0;
	while (start<leng)
	{
		temp = s[start];
		s[start] = s[leng];
		s[leng] = temp;
		start++;
		leng--;
	}
}
void Reverse_Word(char *s)
{
	int start, leng, end;
	start = 0;
	end = 0;
	leng = strlen(s);
	// if((s == NULL) || (*s == '\0') || (s[1] == '\0'));
	// return 0;                               //���Ϊ�ջ���һ���ַ�������ת��

	Reverse_String(s, start, leng - 1);   //   1�����ַ�����ȫת��   //   2����ѯ���ʣ����е���ת��

	while (s[end] != '\0')                      //�����ʵ�\0�������ַ����ѷ�����
	{
		while (s[end] != ' ' && s[end] != '\0') //��endȥ���ҵ���֮��Ŀո����\0��һ���ҵ��ո����\0��endֹͣ++
		{
			end++;
		}
		Reverse_String(s, start, end - 1);        //����ѯ���ĸõ��ʽ���ת��
		start = end + 1;                        //start����end+1��λ�ã���ʼ��ѯ��һ������
		end++;                                  //end�Լ�
	}
}
void main()
{
	char S[100] = { 0 };
	printf("������Ҫת�õĵ���\n");
	gets(S);
	Reverse_Word(S);
	printf("%s", S);
}