/*
#include<stdio.h>
int main(void)
{
	float  weight;
	float  value;
	printf("Are you worth your value in platinum?\n");
	printf("Let's check it out.\n");
	printf("Please enter your weight in pounds:");

	scanf_s("%f", &weight);
	value = 1700.0 * weight * 15.5833;
	printf("Your weight in platinum price $%0.2f.\n",value);
	printf("You are easily worth that ! If platinum prices drop,\n");
	printf("eat more to maintain your value");

	return 0;
}
*/
/*  溢出示例  */
/*
#include<stdio.h>
int main(void)
{
	short int i = 2147483647;
	unsigned int j = 4294967295;


	printf_s("%d %d %d\n", i, i+1, i+2);
	printf_s("%u %u %u\n", j, j+1, j+2);

	return 0;
}
*/
/* 打印字符示例 */
/*
#include<stdio.h>
int main(void)
{
	char ch;
	

	printf_s("Please enter a character.\n");
	//ch = getchar();
	scanf_s("%c",&ch); // 输入字符 
	printf_s("The code for %c is %d\n", ch, ch);

	return 0;
}
*/
/* 打印浮点值示例 */
/*
#include<stdio.h>
int  main(void)
{
	float aboat = 3200.00;
	double abet = 2.14e9;
	

	printf_s("%f can be written %e\n", aboat, aboat);
	printf_s("And it's %a in hexdecimal ,power of 2 notation\n", aboat);
	printf_s("%f can be written %e/n", abet, abet);
	
	return 0;
}
*/
/* 打印各数据类型大小示例 */
/*
#include<stdio.h>
int main(void)
{
	//sizeof()判断数据类型长度
	printf_s("Type int has a size of %u bytes.\n", sizeof(int));
	printf_s("Type char has a size of %u bytes\n", sizeof(char));
	printf_s("Type long has a size of %u bytes\n", sizeof(long));
	printf_s("Type long long has a size of %u bytes\n", 
		      sizeof(long long));
	printf_s("Type double has a size of %u bytes\n",
		      sizeof(double));
	printf_s("Type long double has a size of %u bytes\n",
		      sizeof(long double));

	return 0;
}
*/
/* 使用转移序列 */
/*
#include<stdio.h>
int main(void)
{
	float salary;
	

	printf_s("Enter your desired monthly salary:");
	printf_s("$_____\b\b\b\b\b");
	scanf_s("%f",&salary);
	printf_s("\n\t$%.2f a month is $%.2f a year.", salary, salary*12.0);
	printf_s("\rGee!\n");			


	return 0;

}
*/
/* 输入ASCII码值 输出对应ASCII字符*/
/*
#include<stdio.h>
int main(void)
{
	int number;


	printf_s("Please enter an ASCII number :");
	scanf_s("%d", &number);
	printf_s("\nThe ASCII number \'%d\' is correspond to the character \'%c\'\n",
		     number, number);


	return 0;
}
*/
