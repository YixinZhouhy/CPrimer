/* 使用gechar()退出循环注意示例 */
/*
#include<stdio.h>
int main(void)
{
	char ch1;
	int number = 0;

	// 使用getchar()时'\n'(enter)也会被送入缓冲区
	while ((ch1 = getchar()) != '0')
	{
		number = number + 1;
		printf_s("%d", number);
	}

	return 0;
}
*/
/* 使用scanf_s退出循环示例 */
/*
#include<stdio.h>
int main(void)
{
	int number = 0;
	int in;
	
	// 使用enter不会将'\n'送入缓冲区
	printf_s("q to quit\n");
	while ( scanf_s("%d", &in) == 1 )
	{
		number++;
		printf_s("%d\n", number);
	}

	return 0;
}
*/
/* 使用指针形式定义字符串示例 */
/*
#include<stdio.h>
int main(void)
{
	const char * str = "hello!";
	int ar[2] = { 1 , 2 };
	int * num;

	num = ar;
	printf_s("%s\n", str);  // 注意printf中待打印项
	printf_s("%d\n", *(num + 1));  // 注意前后两行区别


	return 0;
}
*/
/* gets()与puts()函数使用示例 */
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
/* fgets()与fputs()使用示例 */
/*
#include<stdio.h>
#define LENGTH  4
int main(void)
{
	char words[LENGTH];


	puts("Enter a string, please");
	fgets(words, LENGTH, stdin);  // 三个参数，stdin : 标准输入（即从键盘输入数据）
	printf_s("Your string twice ( puts(), then fputs() ):\n");
	puts(words);
	fputs(words, stdout);


	return 0;
}
*/
/* fgets()返回char的指针示例 */
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
/* puts()函数示例 */
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
/* 字符串逆序示例 */
/*
#include<stdio.h>
#include<string.h>
int main(void)
{
	const char str[10] = "abcdefghi";
	char  str2[10];
	int length;  // 统计字符串长度
	int i ;  // i ：计数

	length = strlen(str);  //获得字符串长度
	for (i = 0; i <= length; i++)
		str2[i] = str[ length - i - 1];
	str2[length] = '\0';  // 结尾处加如'\0'构成字符串 
	puts(str2);


	return 0;
}
*/
/* 处理多余字符示例 */
/*
#include<stdio.h>
#define STLEN  10
int main(void)
{
	char words[STLEN];
	int i;  // 计数i

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
			// words[i] = '\0'读取但不存储输入
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
#define SIZE  81  // 限制字符串长度，包括\0
#define LIM  20  // 可读入的最多行数
#define HALT  ""  // 空字符串停止输入

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
/* strcat_s()拼接字符串示例 */
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

// 遇到换行符或者空字符停止读取,将换行符替换为空字符
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
			st[i] = '\0';  // 将换行符替换为空字符
		else
		{
			while (getchar() != '\n')  // 读取后续字符但不保存
				continue;
		}
	}
	

	return ret_val;
}
*/
/* 使用strcmp()检查程序是否要停止示例 */
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
	while ( ct < LIM &&  // 限定输入行数
			s_gets(input[ct],SIZE) != NULL &&  // 判断输入是否为EOF或error
			input[ct][0] != '\0'  // 判断是否按下Enter键
			)
	{
		ct++;  // 行数计数
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
			st[i] = '\0';  // 将换行符替换为空字符
		else
		{
			while (getchar() != '\n')  // 读取后续字符但不保存
				continue;
		}
	}


	return ret_val;
}
*/

/* 使用strncmp()函数判断字符串中是否有某指定字符串示例 */
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
/* 将字符串改为全大写及统计标点字符个数示例 */
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
	find = strchr(line, '\n');  // 查找换行符
	if (find)
		*find = '\0';
	ToUpper(line);  // 将字符串全变大写
	puts(line);
	// 统计标点字符个数并打印
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
/* 带参数的main() */


