/* if else 示例1 */
// 找出0℃一下天数占总天数百分比
/*
#include<stdio.h>
int main(void)
{
	const int FREEZING = 0;
	float temperature;
	int cold_days = 0;
	int all_days = 0;

	printf_s("Enter list of daily low temperature.\n");
	printf_s("Use Celsius, and enter q to quite.\n");
	while (scanf_s("%f", &temperature) == 1) 
	{
		++all_days;
		if (temperature < FREEZING)
			++cold_days;
	}
	//判断是否有数输入 if-else中test只要非零即为真
	if (all_days)
		printf_s("%d days total : %.1f were below freezing.n", all_days,
				(float) cold_days / all_days);
	else
		printf_s("No data entered\n");


	return 0;
}
*/
/*
#include<stdio.h>
#define SPACE ' '
int main(void)
{
	char ch;


	ch = getchar();
	while (ch !='\n')
	{
		if (ch == SPACE)
			putchar(ch);  
		else
			putchar(ch + 1);  //改变字符
		ch = getchar();
	}
	putchar(ch);


	return 0;
}
*/
/*
#include<stdio.h>
#include<ctype.h>  //为isspace()函数提供原型
#include<stdbool.h>  //为bool、true、false提供定义
#define STOP '|'
int main(void)
{
	char ch;  //读入字符
	char prev;	//读入前的一个字符
	long n_chars = 0L;  //字符数
	int n_lines = 0;
	int n_words = 0;
	int p_lines = 0; //不完整的行数
	bool inword = false;


	printf_s("Enter text to be analyzed (| to terminate):\n");
	while ((ch = getchar()) != STOP)
	{
		n_chars++;
		if (ch == '\n')
			n_lines++;
		if (!isspace(ch) && !inword)
		{
			inword = true;
			n_words++;
		}
		if (isspace(ch) && inword)
			inword = false;
	}
	printf_s("%d characters %d words %d lines", n_chars, n_words, n_lines);


	return 0;
}
*/
/* 条件运算符示例 */
/*
#include<stdio.h>
int main(void)
#define COVERAGE 350
{
	int sq_feet, cans;


	printf_s("Please enter number of square feet to be painted:\n");
	while ((scanf_s("%d", &sq_feet) == 1))
	{
		cans = sq_feet / COVERAGE;
		cans += ((sq_feet % COVERAGE == 0) ? 0 : 1);
		printf_s("You need %d %s of paint.\n", cans,
			      cans == 1 ? "can" : "cans");
		printf_s("Enter next value (q to quit):\n");
	}
}
*/
/* break语句示例 */
/*
#include<stdio.h>
int main(void)
{
	float length, width;

	printf_s("Enter the length of the rectangle(q to quit):\n");
	while (scanf_s("%f", &length) == 1)
	{
		printf_s("Length = %.2f:\n", length);
		printf_s("Enter its width:");
		if ((scanf_s("%f", &width) != 1))
			break;
		printf_s("Width = %.2f:\n", width);
		printf_s("Area = %.2f:\n", width * length);
		printf_s("Enter the length of the rectangle(q to quit):\n");
	}
	printf_s("Done.\n");
	

	return 0;
}
*/
/*  switch case语句示例 */
/*
#include<stdio.h>
#include<ctype.h>  // isslower() protype
int main(void)
{
	char ch;


	printf_s("Give me a lowercase letter, and I will give\
			  an animal name\nbeginning with that letter.\n");
	printf_s("Please type in a letter; type# to end my act.\n");
	while ((ch = getchar()) != '#')
	{
		if (ch == '\n')
			continue;
		if (islower(ch))
			switch (ch)
		{
			case 'a':
				printf_s("argail, a wild sheep of Asia\n");
				break;
			case 'b':
				printf_s("babirusa, a wild pig of Maly\n");
			default:
				printf_s("That's a stumper!\n");
				break;
		}
		else
			printf_s("I recongize only lowercase letter\n");
		printf_s("Please type in a letter or a # .\n");
	}


	return 0;
}
*/
/*
#include<stdio.h>
int main(void)
{
	char ch;
	int a_ch, b_ch, c_ch, d_ch;  
	// 字母A（a）、B（b）、C（c）、D（d）的个数

	a_ch = b_ch = c_ch = d_ch = 0;
	printf_s("Enter some text ;enter # to quit.\n");
	while ((ch = getchar()) != '#')
	{
		switch (ch)
		{
			case 'a':
			case 'A':
				a_ch++;
				break;
			case 'b':
			case 'B':
				b_ch++;
				break;
			case 'c':
			case 'C':
				c_ch++;
				break;
			case 'd':
			case 'D':
				d_ch++;
				break;
			default:
			break;
		}
	}
	printf_s("%d %d %d %d", a_ch, b_ch, c_ch, d_ch);


	return 0;
}
*/

/* switch 语句无break示例 */
/*
#include<stdio.h>
int main(void)
{
	int i ;


	while (i < 3)
	{
		switch (i++)
		{
		case 0:printf_s("fat ");
		case 1:printf_s("hat ");
		case 2:printf_s("cat ");
		default:printf_s("Oh on!");
		}
		putchar('\n');
	}


	return 0;
}
*/
/*  习题1 */
/**
#include<stdio.h>
#include<ctype.h>
int main(void)
{
	char ch;
	int n_space, n_huanhang, n_character;
	//定义空格计数、换行计数、字符计数

	n_space = n_huanhang = n_character = 0;
	printf_s("Please enter a text ( # to quit ):\n");
	while ((ch = getchar()) != '#')
	{
		if (ch == '\n')
			n_huanhang++;
		else
		{
			if (ch == ' ')
				n_space++;
			else
				n_character++;
		}
	}
	printf_s("\n space = %d  换行符 = %d 其他字符 = %d",
			 n_space, n_huanhang, n_character);
	return 0;
}
*/
/* 习题6 */
#include<stdio.h>
int main(void)
{
	char ch, ch_pre; //ch : 当前字符 ch_pre : 前一个字符
	int number,i;  //记录 “ei” 出现次数

	ch_pre = number = 0;
	printf_s("Enter some text ; enter # to quit\n");
	while ((ch = getchar()) != '#')
	{
	
		if (ch == 'e')
			ch_pre = ch;
		else
			ch_pre = 0;
		if (ch_pre == 'e' && ch == 'i')
		{
			number++;
			ch_pre = 0;
		}
		
	}
	printf("%d", number);

	return 0;
}
