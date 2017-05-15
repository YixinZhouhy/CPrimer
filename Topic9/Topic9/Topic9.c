/* function 示例1 */
/*
#include<stdio.h>
#define WIDTH 10
#define NAME "LEMON"
void starbar(void);  //function prototype
int main(void)
{	
	starbar();  //function call
	printf_s("%s\n", NAME);
	starbar();

	return 0;
}
void starbar(void)  //function definition
{
	int count;

	for (count = 1; count <= WIDTH; count++)
		putchar('*');
	putchar('\n');
}
*/
/* function 示例2*/
/*
#include<stdio.h>
int min(int a, int b);
int main(void)
{
	int num_1, num_2;
	

	printf_s("Please enter a pair of integers ( q to quit)；\n");
	while (scanf_s("%d,%d", &num_1, &num_2) == 2)
	{
		printf_s("min = %d\n", min(num_1, num_2));
		printf_s("Please enter a pair of integers ( q to quit)；\n");
	}
		

	return 0;
}
int min(int a, int b)
{
	int min;

	if (a >= b)
		min = b;
	else
		min = a;


	return min;
}
*/
/* 递归示例 */
/*
#include<stdio.h>
void up_and_down(int n);

int main(void)
{
	up_and_down(1);

	return 0;
}
void up_and_down(int n)
{
	printf("Level %d : n location %p\n", n, &n);
	if (n < 4)
		up_and_down(n + 1);
	printf_s("Level %d : n location %p\n", n, &n);
}
*/
/* 尾递归示例 */
/*
#include<stdio.h>

long fact(int n);
long rfact(int n);

int main(void)
{
	int num;

	
	printf_s("This program calculates factorials.\n");
	printf_s("Enter a value in the range 0-12(q to quit):\n");
	while (scanf_s("%d",  &num) == 1)
	{
		if (num < 0)
			printf_s("No negative numbers,please.\n");
		else if (num > 12)
			printf_s("keep input under 12.\n");
		else
		{
			printf_s("loop :%d factorial = %ld\n", num, fact(num));
			printf_s("recursion : %d factorial = %ld\n", num, rfact(num));
		}
		printf_s("Enter a value in the range 0-12(q to quit):\n");
	}
	printf_s("Bye.\n");


	return 0;
}
long fact(int n)  //循环求阶乘
{
	long ans;
	for (ans = 1; n > 1; n--)
		ans *= n;
	
	return ans;
}
long rfact(int n)  // 递归求阶乘
{
	long ans;


	if (n > 0)
		ans = n * rfact(n - 1);
	else
		ans = 1;

	return ans;
}
*/
/* 以二进制形式打印整数 */
/*
#include<stdio.h>
void to_binary(unsigned long n);
int main(void)
{
	unsigned long number;
	printf_s("Enter an integer (q to quit):\n");
	while (scanf_s("%lu", &number) == 1)
	{
		printf_s("Binary equivalent:\n");
		to_binary(number);
		putchar('\n');
		printf_s("Enter an integer (q to quit):\n");
	}
	printf_s("Done.\n");


	return 0;
	
}
void to_binary(unsigned long n)
{
	int r;

	r = n % 2;
	if (n >= 2)
		to_binary(n / 2);
	putchar(r == 0 ? '0' : '1');


	return;
}
*/
/* 使用.h头文件示例 */
/*
#include<stdio.h>
#include "hotel.h"

int main(void)
{
	int nights;
	double hotel_rate;
	int code;


	while ((code = menu()) != QUIT)
	{
		switch (code)
		{
			case 1: hotel_rate = HOTEL1;
					break;
			case 2: hotel_rate = HOTEL2;
					break;
			case 3: hotel_rate = HOTEL3;
					break;
			case 4: hotel_rate = HOTEL4;
					break;
			default:hotel_rate = 0.0;
					break;
		}
		nights = getnight();
		showprice(hotel_rate, nights);
	}
	printf_s("Thank you!\n");


	return 0;
}
*/
/* 指针通信示例 */
#include<stdio.h>
void interchange(int * u, int * v);

int main(void)
{
	int x, y;


	x = 5;
	y = 10;
	printf_s("Originally x = %d and y =%d.\n", x, y);
	interchange(&x, &y);
	printf_s("Now x = %d and y = %d.\n", x, y);


	return 0;
}
void interchange(int * u, int * v)
{
	int temp;


	temp = *u;
	*u = *v;
	*v = temp;
}