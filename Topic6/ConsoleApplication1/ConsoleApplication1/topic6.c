/* �˳�ѭ��ʾ�� */
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
/* while ������ֵ����ʾ�� */
// while ����ʽʽ�н��� 0 ����Ϊ��
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
/* ������� */
/*
#include<stdio.h>
int main(void)
{
	int t_ct;  //�����
	double time, power_of_2;
	int limit;


	printf_s("Enter the number of terms you want: ");
	scanf_s("%d", &limit);
	for (time = 0, power_of_2 = 1, t_ct = 1;
		t_ct <= limit;
		t_ct++, power_of_2 *= 2.0) // ���ж��������
	{
		time += 1.0 / power_of_2; //time = time + 1.0 / power_of_2
		printf_s("time = %f when terms = %d. \n", time, t_ct);
	}


	return 0;
}
*/
/* do while ѭ��ʾ�� */
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
/* forѭ����ʹ������ʾ�� */
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
/* ʹ�ú�����Χ�ǵ�ѭ��ʾ�� */
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
/* ϰ��3 */
/*
#include<stdio.h>
int main(void)
{
	int i, j;

	for (i = 0; i <= 5; i++)
	{
		for (j = 0; j <=i; j++)
			printf_s("%c", 70 - j); // ASCII��ֵ70 ��ӦF
		printf_s("\n");
	}

	return 0;
}
*/
/* ϰ��4 */
/*
#include<stdio.h>
int main(void)
{	
	int i, j, sum;

	sum = 64;
	for (i = 0; i <= 5; i++)  // �趨������
	{
		for (j = 0; j <= i; j++)  //�趨ÿ�д�ӡ�ַ���
		{
			printf_s("%c", ++sum); //A ��ASCII��ֵΪ65
		}
		printf_s("\n");
	}

	return 0;
}
*/
/* ϰ��5 */
int main(void)
{
	int i, j, k, l,ascii_64;

	
	for (i = 0; i <= 4; ++i)
	{
		ascii_64 = 64;
		for (j = 0; (j + i) <= 3; ++j) //��n�еĿո��� + n Ϊһ����ֵ
		{
			printf_s(" ");
		}
		for (k = 0; k <= i; ++k)  //�����д�ӡ��ĸ
		{
			printf_s("%c", ++ascii_64);
		}
		for (l = 0; l < i; ++l)  //�����д�ӡ��ĸ
		{
			printf_s("%c", --ascii_64 );
		}
		printf_s("\n");
	}


	return 0;
}