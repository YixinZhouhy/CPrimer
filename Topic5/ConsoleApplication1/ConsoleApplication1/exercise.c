/*
#include<stdio.h>
#define ADJUST 7.31
int main(void)
{
	const double SCALE = 0.333;
	double shoe, foot;


	shoe = 9.0;
	foot = SCALE * shoe + ADJUST;
	printf_s("Shoe size (men's) foot length\n");
	printf_s("%10.1f %15.2f inches\n", shoe, foot);

	return 0;
}
*/
/*
#include<stdio.h>
#define SEC_PER_MIN 60
int main(void)
{
	int sec, min, left;

	while (1)
	{
		printf_s("\nConvert seconds to minutes and seconds!\n");
		printf_s("Plese enter the number of seconds :\n");
		scanf_s("%d", &sec);
		if (sec > 0  )
		{
			min = sec  / SEC_PER_MIN;
			left = sec % SEC_PER_MIN;
			printf_s("%d sconds is %d minutes, %d seconds.\n", sec, min, left);
		}
		else
		{
			printf_s("the number that you had enter is wrong , please"
					  " enter again !\n");
		}
	}
}
*/
/* ����ǰ׺���׺ʾ�� */
/*
#include<stdio.h>
int main(void)
{
	int a, b, a_post, b_post;


	a = b = 1;
	a_post = ++a;//ǰ׺:�ȵ���1�ٽ�����������
	b_post = b++;//��׺:�Ƚ������������ٵ���1
	printf_s("a = %d a_post = %d b = %d b_post = %d\n",
			  a, a_post, b, b_post);


	return 0;
}
*/
/* ��ת��ֵ��Ŀ�����Ͳ�ƥ��ʾ��1 */
/*
#include<stdio.h>
int main(void)
{
	unsigned int a; // 32 bits
	unsigned char b; // 8 bits


	a = 257;
	b = a; // ȡģ256
	printf_s("%hhu\n", b);  
		 
	return 0;
}
*/
/* ��ת��ֵ��Ŀ�����Ͳ�ƥ��ʾ��2 */
/*
#include<stdio.h>
int main(void)
{
	char ch;
	int i;
	float fl;


	fl = i = ch = 'c';
	printf_s("ch = %c, i = %d ,fl = %2.2f\n", ch, i, fl);
	ch = ch + 1;
	i = fl + 2 * ch;
	fl = 2.0 * ch + 1;
	printf_s("ch = %c, i = %d ,fl = %2.2f\n", ch, i, fl);
	ch = 1107;
	printf_s("Now ch = %c\n", ch);//���ȡģ
	ch = 80.89;
	printf_s("Now ch = %c\n", ch);

	return 0;
}
*/
/* ����������ʾ�� */
/*
#include<stdio.h>
void pound(int n);// ��������
int main(void)
{
	int times = 5;
	char ch = '!'; // ASCII  ��ֵΪ33
	float f = 6.0f;


	pound(times);
	pound(ch);
	pound(f);

	return 0;
}
void pound(int n)
{
	while (n-- > 0)
		printf_s("#");
	printf_s("\n");
}
*/
/* ϰ��1 */
/*
#include<stdio.h>
#define min_per_hour 60;  // ����ÿСʱ�ķ�����
int main(void)
{
	int minute_input, hour, minute_left;  
	// �����û������������ת����Сʱ����������
	
	printf_s("\nPlease enter the minutes you want to transform : ");
	scanf_s("%d", &minute_input);
	while (minute_input > 0)
	{
		hour = minute_input / min_per_hour;//����Сʱ��
		minute_left = minute_input % min_per_hour;//���������
		printf_s("%d minutes = %d hour %d minutes\n", minute_input, hour,
				  minute_left);
		printf_s("Transformation has completed\n");
		printf_s("\nPlease enter the minutes you want to transform : ");
		scanf_s("%d", &minute_input);
	}
	printf_s("The minute you have entered is wrong\n");
	printf_s("The program will be ended\n");


	return 0;
}
*/
/* ϰ��2 */
/*
#include<stdio.h>
int main(void)
{
	int number, i, number_outout;
	//number���������� i:ѭ������ number_output :�������
	i = 0;

	printf_s("Please enter a number :");
	scanf_s("%d", &number);
	while (i <= 10)
	{
		number_outout = number + i;
		printf_s("%d ", number_outout);
		++i;
	}

	return 0;
}
*/
#include<stdio.h>
double lifang(double n);
int main(void)
{
	double number_input, number_output;
	

	scanf_s("%lf", &number_input); //scanf_s ����doubleʱ��%lf
	number_output = lifang(number_input);
	printf_s("%f", number_output);


	return 0;
}
double lifang(double n)
{
	double n_return;


	n_return = n * n * n;


	return n_return;
}