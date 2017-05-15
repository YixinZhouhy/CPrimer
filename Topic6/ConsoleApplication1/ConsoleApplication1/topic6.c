/* 退出循环示例 */
/*
#include<stdio.h>
int main(void)
{
	int n;
	
	n = 5;
	while (n < 7)
	{
		printf_s("n = %d\n", n);
		n++;
		printf_s("now n = %d\n", n);
	}
	printf_s("the loop has finished.\n");

	return 0;
}
*/
/* while 条件数值测试示例 */
// while 表达式式中仅有 0 被视为假
/*
#include<stdio.h>
int main(void)
{
	int n;

	n = 3;
	while (n)
		printf_s("%d is ture.\n", n--);
	printf_s("%d is false.\n", n);
	n = -3;
	while (n)
		printf_s("%d is ture.\n", n++);
	printf_s("%d is false.\n", n);


	return 0;
}
*/
/*
#include<stdio.h>
int main(void)
{
	int secs;
	
	
	for (secs = 5; secs > 0; secs--)
		printf_s("%d seconds!\n", secs);
	printf_s("We have iginition!\n");

	return 0;
}
*/
/* 序列求和 */
/*
#include<stdio.h>
int main(void)
{
	int t_ct;  //项计数
	double time, power_of_2;
	int limit;


	printf_s("Enter the number of terms you want: ");
	scanf_s("%d", &limit);
	for (time = 0, power_of_2 = 1, t_ct = 1;
		t_ct <= limit;
		t_ct++, power_of_2 *= 2.0) // 含有逗号运算符
	{
		time += 1.0 / power_of_2; //time = time + 1.0 / power_of_2
		printf_s("time = %f when terms = %d. \n", time, t_ct);
	}


	return 0;
}
*/
/* do while 循环示例 */
/*
#include<stdio.h>
int main(void)
{
	const int secret_code = 13;
	int  code_entered;


	do
	{
		printf_s("Please enter the secret code number :");
		scanf_s("%d", &code_entered);
	} while (code_entered != secret_code);
	printf_s("Right!\n");

	
	return 0;
}
*/
/* for循环中使用数组示例 */
/*
#include<stdio.h>
#define SIZE 5
#define PAR 72
int main(void)
{
	int index, sum, score[SIZE];
	float average;

	sum = 0;
	printf_s("Please enter %d golf scores\n", SIZE);
	for (index = 0; index < SIZE; index++)
		scanf_s("%d", &score[index]);
	printf_s("\n");
	for (index = 0; index < SIZE; index++)
		sum += score[index];
	average = (float)sum / SIZE;
	printf_s("Sum of scores = %d, average = %.2f\n", sum,average);
	printf_s("That's a handicap of %.f.\n", average - PAR);


	return 0;
}
*/
/* 使用函数范围是的循环示例 */
/*
#include<stdio.h>
double power(double n, int p);
int main(void)
{
	double x, xpow;
	int exp;

	printf_s("Enter a number and the postive integer power");
	printf_s(" to which \n the number will be raised. Enter q");
	printf_s("to quite.\n");
	while (scanf_s("%lf %d", &x, &exp) == 2)
	{
		xpow = power(x, exp);
		printf_s("%.3g to the power %d is %.5g\n", x, exp, xpow);
		printf_s("Enter next pair of numbers or q to quit.\n");
	}
	printf_s("Hope you enjoyed this power of trip -- bye\n");

	return 0;
}
double power(double n, int p)
{
	double pow = 1;
	int i;

	for (i = 1; i <= p; i++)
		pow *= n;


	return pow;
}
*/
/*
#include<stdio.h>
int main(void)
{
	int x;


	x = (1, 2);
	printf_s("%d", x);

	return 0;
}
*/
/* 习题3 */
/*
#include<stdio.h>
int main(void)
{
	int i, j;

	for (i = 0; i <= 5; i++)
	{
		for (j = 0; j <=i; j++)
			printf_s("%c", 70 - j); // ASCII码值70 对应F
		printf_s("\n");
	}

	return 0;
}
*/
/* 习题4 */
/*
#include<stdio.h>
int main(void)
{	
	int i, j, sum;

	sum = 64;
	for (i = 0; i <= 5; i++)  // 设定定行数
	{
		for (j = 0; j <= i; j++)  //设定每行打印字符数
		{
			printf_s("%c", ++sum); //A 的ASCII码值为65
		}
		printf_s("\n");
	}

	return 0;
}
*/
/* 习题5 */
int main(void)
{
	int i, j, k, l,ascii_64;

	
	for (i = 0; i <= 4; ++i)
	{
		ascii_64 = 64;
		for (j = 0; (j + i) <= 3; ++j) //第n行的空格数 + n 为一个定值
		{
			printf_s(" ");
		}
		for (k = 0; k <= i; ++k)  //升序列打印字母
		{
			printf_s("%c", ++ascii_64);
		}
		for (l = 0; l < i; ++l)  //降序列打印字母
		{
			printf_s("%c", --ascii_64 );
		}
		printf_s("\n");
	}


	return 0;
}