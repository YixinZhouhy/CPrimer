/* 引导示例 */
/*
#include<stdio.h>
#include<string.h>
#define DENSITY 62.4
int main(void)
{
	float weight, volume;
	int size, letter;
	char name[40];

	printf_s("Hi! What's your first name?\n");
	scanf_s("%s", name, 40);//40 must be used in VS
	printf_s("%s,what's your weight in pounds?\n", name);
	scanf_s("%f", &weight);
	size = sizeof name;
	letter = strlen(name);
	volume = weight / DENSITY;
	printf_s("Well,%s,your volume is %.2f cubic feet.\n",
		     name, volume);
	printf_s("Also,your first name has %d letter,\n",
		     letter);
	printf_s("and we have %d bytes to store it.\n",
			 size);

	return 0;
}
*/
/*
#include<stdio.h>
#include<string.h> // the function of strlen is included 
#define PRAISE "You are am extradianry being"
int main(void)
{
	char name[40];
	printf_s("What's your name?\n");
	scanf_s("%s", name, 40);
	printf_s("Hello, %s, %s\n", name, PRAISE);
	printf_s("Your name of %u letters occupies %u memory cell.\n",
		     strlen(name), sizeof name);
	
	return 0;
}
*/
/* 字段宽度示例 */
/*
#include<stdio.h>
int main(void)
{
	int number = 6;
	printf_s("**%d**\n", number);
	printf_s("**%2d**\n", number);
	printf_s("**%6d**\n", number);
	printf_s("**%10d**\n",number);
	printf_s("**%-10d**\n", number);
	printf_s("**%20d**\n",number);
	printf_s("**%020d**\n",number);
	printf_s("**%05.7d**\n", number);
	printf_s("**%05.3d**\n", number);


	return 0;
}
*/
/* 转换说明不匹配示例1 */
/*
#include<stdio.h>
#define PAGES 336;
#define WORDS 65618
int main(void)
{
	short number = PAGES;
	short mnumber = -PAGES;


	printf_s("number as short and unsigned short : %hd %hu\n", number, number);
	printf_s("number as short and unsigned short :%hd %hu\n", mnumber, mnumber);
	printf_s("number as int and char : %d %c\n", number, number);
	printf_s("-nuber as int and char :%d %c\n", mnumber, mnumber);

	return 0;
}
*/
/* 转换说明不匹配示例2 */
/*
#include<stdio.h>
int main(void)
{
	float n1 = 3.0;
	double n2 = 3.0;
	long n3 = 2000000000;
	long n4 = 1234567890;

	printf_s("%e %e %e %e\n", n1, n2, n3, n4);
	printf_s("%.le %.le %.le %.le\n", n1, n2, n3, n4);
	printf_s("");
	printf_s("");


	return 0;
}
*/
/* 示例 */
#include<stdio.h>
int main(void)
{
	int a,b;


	scanf_s("%dx%d",&a,&b);// scanf_s中允许普通字符串放在格式字符串中
	printf_s("%d%d",a,b);

	return 0;

}