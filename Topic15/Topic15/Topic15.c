/* 使用位操作显示二进制 */
/*
#include<stdio.h>
#include<limits.h>  // 提供CHAR_BIT的定义，CHAR_BIT 表示每字节的位数
char * itobs(int, char *);  // 将十进制数转化为二进制字符串
void show_bstr(const char *);  // 4位一组显示二进制字符串
int invert_end(int num, int bits);

int main(void)
{
	char bin_str[CHAR_BIT * sizeof(int) + 1];
	int number;

	puts("Enter integers and see them in binary.");
	puts("Non - numeric input terminate program.");
	while ((scanf_s("%d", &number)) == 1)
	{
		itobs(number, bin_str);
		printf_s("%d is ", number);
		show_bstr(bin_str);
		number = invert_end(number, 4);
		itobs(number, bin_str);
		show_bstr(bin_str);
		putchar('\n');
	}
	puts("bye!");

	return 0;
}

char * itobs(int n, char * ps)  // 将十进制数转化为二进制字符串
{
	int i;
	const static int size = CHAR_BIT * sizeof(int);
	
	for (i = size - 1; i >= 0; i--, n >>= 1)
		ps[i] = (01 & n) + '0';
	ps[size] = '\0';
	
	return ps;
}

void show_bstr(const char * str)  // 4位一组显示二进制字符串
{
	int i = 0;

	while (str[i]) // 不是空字符即可进入循环
	{
		putchar(str[i]);
		if (++i % 4 == 0 && str[i])
			putchar(' ');
	}
}
 
int invert_end(int num, int bits)  // 实现将 numb 后 bits 翻转
{
	int mask = 0;
	int bitval = 1;

	while (bits-- > 0)  // 创建所需的掩码，生成后bits位的全1序列
	{
		mask |= bitval;  
		bitval <<= 1;
	}

	return num ^ mask;  // 通过异或实现取反
}
*/

/* 使用字段示例 */
#include<stdio.h>
#include<stdbool.h>  // 提供bool, true, false.

// 线的样式
#define SOLID    0
#define DOTTED   1
#define DASHED   2

// 三原色
#define BLUE    4
#define GREEN   2
#define RED     1

// 混合色
#define BLACK   0
#define YELLOW  (RED | GREEN)
#define MAGENTA (RED | BLUE)
#define CYAN    (GREEN | BLUE)
#define WHITE   (RED | GREEN | BLUE)

const char * colors[8] = {"black", "red", "green", "yellow", 
						 "blue", "magenta", "cyan", "white"};

struct box_props 
{
	bool opaque : 1;
	unsigned int fill_color : 3;
	unsigned int : 4;
	bool show_border : 1;
	unsigned int border_color : 3;
	unsigned int border_style : 2;
	unsigned int : 2;
};

void show_settings(const struct box_props * pb);

int main(void)
{
	// 创建并初始化 box_props 结构
	struct box_props box = { true, YELLOW, true, GREEN, DASHED };

	printf_s("original box setting : \n");
	show_settings(&box);
	
	return 0;

}

void show_settings(const struct box_props * pb)
{
	printf_s("Box is %s.\n",
		pb->opaque == true ? "opaque" : "transparent");
	printf_s("The fill color is %s.\n", colors[pb->fill_color]);
	printf("Border %s.\n",
		pb->show_border == true ? "show" : "not shown");
	printf_s("The border color is %s \n", colors[pb->border_color]);
	printf_s("The border style is");
	switch (pb->border_style)
	{
	case SOLID : 
		printf_s("solid\n");
		break;
	case DOTTED : 
		printf_s("dotted.\n");
		break;
	case DASHED :
		printf_s("dashed.\n");
		break;
	default:
		printf_s("unknow type.\n");
		break;
	}
}



