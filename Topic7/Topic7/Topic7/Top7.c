/* if else ʾ��1 */
// �ҳ�0��һ������ռ�������ٷֱ�
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
	//�ж��Ƿ��������� if-else��testֻҪ���㼴Ϊ��
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
			putchar(ch + 1);  //�ı��ַ�
		ch = getchar();
	}
	putchar(ch);


	return 0;
}
*/
/*
#include<stdio.h>
#include<ctype.h>  //Ϊisspace()�����ṩԭ��
#include<stdbool.h>  //Ϊbool��true��false�ṩ����
#define STOP '|'
int main(void)
{
	char ch;  //�����ַ�
	char prev;	//����ǰ��һ���ַ�
	long n_chars = 0L;  //�ַ���
	int n_lines = 0;
	int n_words = 0;
	int p_lines = 0; //������������
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
/* ���������ʾ�� */
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
/* break���ʾ�� */
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
/*  switch case���ʾ�� */
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
	// ��ĸA��a����B��b����C��c����D��d���ĸ���

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

/* switch �����breakʾ�� */
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
/*  ϰ��1 */
/**
#include<stdio.h>
#include<ctype.h>
int main(void)
{
	char ch;
	int n_space, n_huanhang, n_character;
	//����ո���������м������ַ�����

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
	printf_s("\n space = %d  ���з� = %d �����ַ� = %d",
			 n_space, n_huanhang, n_character);
	return 0;
}
*/
/* ϰ��6 */
#include<stdio.h>
int main(void)
{
	char ch, ch_pre; //ch : ��ǰ�ַ� ch_pre : ǰһ���ַ�
	int number,i;  //��¼ ��ei�� ���ִ���

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