/* 数组示例 */
/*
#include<stdio.h>
int main(void)
{
	const int days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31 };
	int index;


	for (index = 0; index < sizeof days / sizeof days[0]; index++)
		printf("Month %2d has %d days.\n", index + 1, days[index]);
	printf_s("%d\n", sizeof days);
	printf_s("%d\n", sizeof days[0]);

		
	return 0;
}
*/
/* 指定初始化器示例 */
/*
#include<stdio.h>
#define MONTH  12
int main(void)
{
	int days[MONTH] = { 31, 28, [4] = 31, 30, 31, [1] = 29 };
	int i;


	for (i = 0; i < MONTH; i++)
		printf_s("%d  %d\n", i + 1, days[i] );

	
	return 0;
}
*/
/* 二维数组使用示例 */
// 计算每年总降水量、年平均降水量
/*
#include<stdio.h>
#define MONTH	12
#define YEAR	5
int main(void)
{
	// 用2010-2014 年的降水量数据初始化数组
	const float rain[YEAR][MONTH] = 
	{
		{ 4.3, 4.3, 4.3, 3.0, 2.0, 1.2, 0.2, 0.2, 0.4, 2.4, 3.5, 6.6 },
		{ 8.5, 8.2, 1.2, 1.6, 2.4, 0.0, 5.2, 0.9, 0.3, 0.9, 1.4, 7.3 },
		{ 9.1, 8.5, 6.7, 4.3, 2.1, 0.8, 0.2, 0.2, 1.1, 2.3, 6.1, 8.4 },
		{ 7.2, 9.9, 8.4, 3.3, 1.2, 0.8, 0.4, 0.0, 0.6, 1.7, 4.3, 6.2 },
		{ 7.6, 5.6, 3.8, 2.8, 3.8, 0.2, 0.0, 0.0, 0.0, 1.3, 2.6, 5.2 }
	
	};
	int year, month;
	float subtotal, total;  // subtotal : 某年年总降水量 total : 五年总降水量


	printf_s("YEAR          RAINFALL  (inches)\n");
	for (year = 0, total = 0; year < YEAR; year++)
	{
		for (month = 0, subtotal = 0; month < MONTH; month++)
			subtotal += rain[year][month];  // 计算某年总降水量
		printf_s("%5d %15.1f\n", 2010 + year, subtotal);
		total += subtotal;  // 计算五年总降水量
	}
	printf_s("\nThe yearly average is %.1f inches.\n", total / year);
	
}
*/
/* 数组指针示例1 */
/*
#include<stdio.h>
#define SIZE	10
int sum(int ar[], int n);

int main(void)
{
	int num[SIZE] = { 20, 10, 5, 39, 4, 16, 19, 26, 31, 20 };
	long answer;


	answer = sum(num, SIZE);
	printf_s("The total number of num is %ld.\n", answer);
	printf_s("The size of num is %lu bytes.\n", sizeof num);


	return 0;
}

int sum(int ar[], int n)
{
	int i;
	int total;


	for (i = 0, total = 0; i < n; i++)
		total += ar[i];
	printf_s("The size of ar is %ud bytes.\n", sizeof ar);

	return total;
}
*/
/* 数组指针示例2 */
/*
#include<stdio.h>
#define SIZE	10
int main(void)
{
	int num[SIZE] = { 20, 10, 5, 39, 4, 16, 19, 26, 31, 20 };
	long answer;

	answer = sum(num, num + SIZE);
	printf_s("The total number of marbles is %ld.\n", answer);


	return 0;
}
int sum(int * start, int * end)
{
	int total = 0;

	while (start < end)
	{
		total += *start;
		start++;
	}
	

	return total;
}
*/
/* 数组指针示例3 */
/*
#include<stdio.h>
int data[2] = { 100, 200 };
int moredata[2] = { 300, 400 };
int main(void)
{
	int * p1, *p2, *p3;


	p1 = p2 = data;
	p3 = moredata;
	printf_s("  *p1 = %d,   *p2 = %d,     *p3 = %d\n", *p1, *p2, *p3);
	printf_s("*p1++ = %d, *++p2 = %d, (*p3)++ = %d\n", *p1++, *++p2, (*p3)++);
	printf_s("  *p1 = %d,   *p2 = %d,     *p3 = %d\n", *p1, *p2, *p3);


	return 0;
}
*/
/*  指针操作示例 */
/*
#include<stdio.h>
int main(void)
{
	int num[5] = { 100, 200, 300, 400, 500 };
	int * p1, *p2, *p3;


	p1 = num;  // 把一个地址赋值给指针
	p2 = &num[2];  // 把一个地址赋值给指针
	printf_s("pointer value, dereferenced pointer, pointer address:\n");
	printf_s("p1 = %p , *p1 = %d , &p1 = %p1\n", p1, *p1, &p1);

	p3 = p1 + 4;  // 指针加法
	printf_s("\n adding an int to a pointer:\n");
	printf_s("p1 + 4 = %p, *(p1 + 4) =  %d\n", p1 + 4, *(p1 + 4));

	p1++;  // 指针递增
	printf_s("\n values after p1++:\n");
	printf_s("p1 = %p, *p1 = %d, &p1 = %p", p1, *p1, &p1);

	p1--;  // 指针递减
	printf_s("\n values after p1--:\n");
	printf_s("p1 = %p, *p1 = %d, &p1 = %p", p1, *p1, &p1);
	p1++; // 恢复初始值
	// 一个指针减去另一个指针
	printf_s("\n substracting one pointer from another:\n");
	printf_s("p1 = %p, p2 = %p, p2 - p1 = %ld\n", p1, p2, p2 - p1);
	// 一个指针减去一个整数
	printf_s("\n substracting an int  from a pointer:\n");
	printf_s("p1 = %p, p1 - 1 = %p \n", p1, p1 - 1);
	
	
	return 0;
}
*/
/* 指向多维数组的指针示例 */
/*
#include<stdio.h>
int main(void)
{
	int zippo[4][2] = { { 2, 4 }, { 6, 8 }, { 1, 3 }, { 5, 7 } };
	int(*pz)[2];

	pz = zippo;
	printf_s("       pz = %p,       pz + 1 = %p\n", pz, pz + 1);
	printf_s("    pz[0] = %p,    pz[0] + 1 = %p\n", pz[0], pz[0] + 1);
	printf_s("   *pz[0] = %d,   *pz[0] + 1 = %d\n", *pz[0], *pz[0] + 1);
	printf_s("      *pz = %p,      *pz + 1 = %p\n", *pz, *pz + 1);
	printf_s("&pz[0][0] = %p\n", &pz[0][0]);


	return 0;


}
*/
/* 处理二维数组函数示例 */
#include<stdio.h>
#define ROWS	3  // row
#define COLS	4  // column
void sum_rows(int(*ar)[COLS], int rows);  // protype the function of sum_rows
void sum_cols(int(*ar)[COLS], int cols);  // protype the function of sum_cols

int main(void)
{
	int junk[ROWS][COLS] = { { 2, 4, 6, 8 }, 
							 { 3, 5, 7, 9 },
							 { 12, 10, 8, 6 }
							};

	sum_rows(junk, 1);
	sum_cols(junk, COLS);


}
// definiton the function of sum_rows
void sum_rows(int(*ar)[COLS], int rows)
{
	int r, c, tot;  // r : row, c : column, tot : total
	for (r = 0; r < rows; r++)
	{
		for (c = 0, tot = 0; c < COLS; c++)
			tot += ar[r][c];
		printf_s("row = %d  total = %d\n", r, tot);
	}	
}

// definite the function of sum_cols
void sum_cols(int ar[ROWS][COLS], int cols)
{
	int r, c, tot;  // r : row, c : column, tot : total
	for (c = 0; c < cols; c++)
	{
		for (r = 0, tot = 0; r < ROWS; r++)
			tot += ar[r][c];
		printf_s("cols = %d  total = %d\n", c, tot);
	}
}
