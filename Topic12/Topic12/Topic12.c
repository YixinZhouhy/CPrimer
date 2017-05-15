/* 局部静态变量示例 */
/*
#include<stdio.h>
void trystat(void);

int main(void)
{
	int count;


	for (count = 1; count <= 3; count++)
	{
		printf_s("Here comes iteration %d:\n", count);
		trystat();
	}

	return 0;
}
void trystat(void)
{
	int fade = 1;
	static int stay = 1;  // 静态局部变量只会初始化一次


	printf_s("fade = %d and stay = %d\n", fade++, stay++);
}
*/
/* 外部变量示例 */
/*
#include<stdio.h>
void critic(void);

int units;   // 声明外部变量，自动初始化为0
int main(void)
{
	extern int units;  // 可选重复声明
	
	printf_s("units = %d\n", units);
	printf_s("How many pounds to a firkin of butter?\n");
	scanf_s("%d", &units);
	while (units != 56)
	{
		critic();
	}
	printf_s("You must have looked it up!\n");


	return 0;
}

void critic(void)
{
	printf_s("No luck, my friends. Try again.\n");
	scanf_s("%d", &units);  // 删除了可选的声明
}
*/
/* 各类型变量定义及声明示例 */
/*
#include<stdio.h>
void report_count();
void accumulate(int k);

int count = 0;  // 外部变量

int  main(void)
{
	int value;  // 自动变量
	register int i;  // 寄存器变量


	printf_s("Enter a positive integer ( 0 to quit):\n");
	while (scanf_s("%d", &value) == 1 && value > 0)
	{
		++count;
		for (i = value; i >= 0; i--)
			accumulate(i);
		printf_s("Enter a positive integer ( 0 to quit ) : ");
	}
	report_count();


	return 0;
}
void report_count()
{
	printf_s("Loop executed %d times\n", count);
}
*/
/*  动态分配数组示例 */
/*
#include<stdio.h>
#include<stdlib.h>  // 提供malloc()、free()原型


int main(void)
{
	double * ptd;
	int max;
	int number;
	int i = 0;

	puts("What is the maximum number of type double entries?");
	if (scanf_s("%d", &max) != 1)
	{
		puts("Number not correctly entered -- bye.");
		exit(EXIT_FAILURE);
	}


	ptd = (double *)malloc(max * sizeof (double));
	
	if (ptd == NULL)
	{
		puts("Memory allocation failed. Goodbye");
		exit(EXIT_FAILURE);
	}
	puts("Enter the values ( q to quit):");
	while (i < max && scanf_s("%lf", &ptd[i]) == 1)
		i++;
	printf_s("Here are your %d entries: \n", number = i);
	for (i = 0; i < number; i++)
	{
		printf_s("%7.2f", ptd[i]);
		if (i % 7 == 6)
			putchar("\n");
	}
	if (i % 7 == 0)
		putchar("\n");
	puts("Done");
	free(ptd);

	return 0;
}
*/
/*  动态分配数组示例2 */
/*
#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int  * pr;
	
	pr = (int *)malloc(4 , sizeof (int));
	//int pr[4] = { 1, 2, 3, 4 };
	for (int i = 0; i < 4; i++)
	{
		pr[i] = i;
		printf_s("%d", pr[i]);
	}
	free(pr);


	return 0;
}
*/

/*  */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int static_store = 30;
const char * pcg = "String Literal";


int main(void)
{
	int auto_store = 40;
	char auto_string[] = "Auto char array";
	int * pi;
	char * pcl;

	
	pi = (int *)malloc(sizeof(int));
	*pi = 35;
	pcl = (char *)malloc(strlen("Dynamic String") + 1);
	strcpy_s(pcl, strlen("Dynamic String") + 1, "Dynamic String");   // 注意+1 构成字符串
	printf_s("static_store: %d at %p\n", static_store, &static_store);
	printf_s("auto_store: %d at %p\n", auto_store, &auto_store);
	printf_s("*pi: %d at %p\n", *pi, pi);
	printf_s("static_string at %p\n", &pcg);
	printf_s("auto char array at %p\n", &auto_string);
	printf_s("dynamic string at %p\n", &pcl);
	printf_s("quoted string at %p\n", "quoted string");
	free(pi);
	free(pcl);


	return 0;
}