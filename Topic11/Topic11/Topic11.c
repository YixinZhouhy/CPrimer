/* ʹ��gechar()�˳�ѭ��ע��ʾ�� */
/*
#include<stdio.h>
int main(void)
{
	char ch1;
	int number = 0;

	// ʹ��getchar()ʱ'\n'(enter)Ҳ�ᱻ���뻺����
	while ((ch1 = getchar()) != '0')
	{
		number = number + 1;
		printf_s("%d", number);
	}

	return 0;
}
*/
/* ʹ��scanf_s�˳�ѭ��ʾ�� */
/*
#include<stdio.h>
int main(void)
{
	int number = 0;
	int in;
	
	// ʹ��enter���Ὣ'\n'���뻺����
	printf_s("q to quit\n");
	while ( scanf_s("%d", &in) == 1 )
	{
		number++;
		printf_s("%d\n", number);
	}

	return 0;
}
*/
/* ʹ��ָ����ʽ�����ַ���ʾ�� */
/*
#include<stdio.h>
int main(void)
{
	const char * str = "hello!";
	int ar[2] = { 1 , 2 };
	int * num;

	num = ar;
	printf_s("%s\n", str);  // ע��printf�д���ӡ��
	printf_s("%d\n", *(num + 1));  // ע��ǰ����������


	return 0;
}
*/
/* gets()��puts()����ʹ��ʾ�� */
/*
#include<stdio.h>
int main(void)
{
	char words[8];


	puts("Enter a string, please.");
	gets_s(words, 8);
	printf_s("Your string twice:\n");
	printf_s("%s\n", words);
	puts(words);
	puts("Done.");


	return 0;
}
*/
/* fgets()��fputs()ʹ��ʾ�� */
/*
#include<stdio.h>
#define LENGTH  4
int main(void)
{
	char words[LENGTH];


	puts("Enter a string, please");
	fgets(words, LENGTH, stdin);  // ����������stdin : ��׼���루���Ӽ����������ݣ�
	printf_s("Your string twice ( puts(), then fputs() ):\n");
	puts(words);
	fputs(words, stdout);


	return 0;
}
*/
/* fgets()����char��ָ��ʾ�� */
/*
#include<stdio.h>
#define LENGTH 10
int main(void)
{
	char words[LENGTH];


	puts("Enter strings (empty line to quit):");
	while (fgets(words, LENGTH, stdin) != NULL && words[0] != '\n')
		fputs(words, stdout);
	puts("Done.");


	return 0;

}
*/

/*
#include<stdio.h>
int main(void)
{
	char name1[11], name2[11];
	int count;


	printf_s("Please enter 2 names.\n");
	count = scanf_s("%5s %10s", name1, 11, name2, 11);
	printf_s("I read the %d names %s and %s.\n", count, name1, name2);


	return 0;
}
*/
/* puts()����ʾ�� */
/*
#include<stdio.h>
#define DEF  "I am a #define string."
int main(void)
{
	char str1[80] = "An array was initialized to me.";
	const char * str2 = "A pointer was initialized to me.";
	
	puts(DEF);
	puts(str1);
	puts(str2);
	puts(str1 + 4);

	return 0;
}
*/
/* �ַ�������ʾ�� */
/*
#include<stdio.h>
#include<string.h>
int main(void)
{
	const char str[10] = "abcdefghi";
	char  str2[10];
	int length;  // ͳ���ַ�������
	int i ;  // i ������

	length = strlen(str);  //����ַ�������
	for (i = 0; i <= length; i++)
		str2[i] = str[ length - i - 1];
	str2[length] = '\0';  // ��β������'\0'�����ַ��� 
	puts(str2);


	return 0;
}
*/
/* ���������ַ�ʾ�� */
/*
#include<stdio.h>
#define STLEN  10
int main(void)
{
	char words[STLEN];
	int i;  // ����i

	puts("Enter string (empty line to quit):");
	while (fgets(words, STLEN, stdin) != NULL  && words[0] != '\n');
	{
		i = 0;
		while (words[i] != '\n' && words[i] != '\0')
			i++;
		if (words[i] == '\n')
			words[i] = '\0';
		else
		{
			// words[i] = '\0'��ȡ�����洢����
			while (getchar() != '\n')
			{
				continue;
			}
		}
		puts(words);
	}


	return 0;
}
*/


/*
#include<stdio.h>
#include<string.h>
#define SIZE  81  // �����ַ������ȣ�����\0
#define LIM  20  // �ɶ�����������
#define HALT  ""  // ���ַ���ֹͣ����

int main(void)
{

	char input[LIM][SIZE];
	char *ptstr[LIM];
	int ct = 0;
	int k;


	printf_s("Input up to %d lines, and I will sort them.\n", LIM);
	printf_s("To stop, press the enter key at a lines's start.\n");
	while (true)
	{

	}


	return 0;
}
void stsrt(char *string[], int num)
{
	char * temp;
	int top, seek;

	for (top = 0; top < num - 1; top++)
	{
	}
	for (seek = top + 1; seek)


}
*/
/* strcat_s()ƴ���ַ���ʾ�� */
/*
#include <stdio.h>
#include <string.h>
#define SIZE  80
char * s_gets(char * st, int n);

int main(void)
{
	char flower[SIZE];
	char addon[] = "s smell like old shoes.";

	puts("What is your favorite flower?");
	if (s_gets(flower, SIZE))
	{
		strcat_s(flower,SIZE, addon);
		puts(flower);
		puts(addon);
	}
	else
		puts("End of file encountered!");
	puts("Bye");


	return 0;
}

// �������з����߿��ַ�ֹͣ��ȡ,�����з��滻Ϊ���ַ�
char * s_gets(char * st, int n)
{
	char * ret_val;
	int i = 0;


	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		while (st[i] != '\n' && st[i] != '\0' )
			i++;
		if (st[i] == '\n')
			st[i] = '\0';  // �����з��滻Ϊ���ַ�
		else
		{
			while (getchar() != '\n')  // ��ȡ�����ַ���������
				continue;
		}
	}
	

	return ret_val;
}
*/
/* ʹ��strcmp()�������Ƿ�Ҫֹͣʾ�� */
/*
#include<stdio.h>
#include<string.h>
#define SIZE  80
#define LIM  10
#define STOP  "quit"
char * s_gets(char * st, int n);

int main(void)
{
	char input[LIM][SIZE];
	int ct = 0;


	printf_s("Enter up to %d lines (press the Enter button to quit):\n", LIM);
	while ( ct < LIM &&  // �޶���������
			s_gets(input[ct],SIZE) != NULL &&  // �ж������Ƿ�ΪEOF��error
			input[ct][0] != '\0'  // �ж��Ƿ���Enter��
			)
	{
		ct++;  // ��������
	}
	printf_s("%d strings entered\n", ct);


	return 0;
}

char * s_gets(char * st, int n)
{
	char * ret_val;
	int i = 0;


	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		while (st[i] != '\n' && st[i] != '\0')
			i++;
		if (st[i] == '\n')
			st[i] = '\0';  // �����з��滻Ϊ���ַ�
		else
		{
			while (getchar() != '\n')  // ��ȡ�����ַ���������
				continue;
		}
	}


	return ret_val;
}
*/

/* ʹ��strncmp()�����ж��ַ������Ƿ���ĳָ���ַ���ʾ�� */
/*
#include<stdio.h>
#include<string.h>
#define LISTSIZE  6
int main(void)
{
	const char * list[LISTSIZE] =
	{
		"astronomy", "astounding",
		"astrophysics", "ostracize",
		"astersism", "astrophobia"
	};
	int count = 0;
	int i;


	for (i = 0; i < LISTSIZE; i++)
	{
		if (strncmp(list[i],"astro",5) == 0)
		{
			printf_s("Found: %s\n",list[i]);
			count++;
		}
	}


	return 0;
}
*/
/* ���ַ�����Ϊȫ��д��ͳ�Ʊ���ַ�����ʾ�� */
/*
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define LIMIT  81
void ToUpper(char * str);
int PunctCount(const char * str);

int main(void)
{
	char line[LIMIT];
	char * find;

	puts("Please enter a line:");
	fgets(line,LIMIT,stdin);
	find = strchr(line, '\n');  // ���һ��з�
	if (find)
		*find = '\0';
	ToUpper(line);  // ���ַ���ȫ���д
	puts(line);
	// ͳ�Ʊ���ַ���������ӡ
	printf_s("%d punctuation characters.\n", PunctCount(line));  


	return 0;
}
void ToUpper(char * str)
{
	while ( *str )
	{
		*str = toupper(*str);
		str++;
	}
}
int PunctCount(const char * str)
{
	int count = 0;

	while ( *str )
	{
		if( ispunct(*str) )
			count++;
		str++;
	}

	return count;
}
*/
/* ��������main() */

