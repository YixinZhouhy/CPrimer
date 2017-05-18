/* 结构体变量示例 */
/*
#include <stdio.h>
#include <string.h>

char * s_gets(char * st, int n);

#define MAXTITL  41  // 书名的最大长度 + 1
#define MAXAUTL  31  // 作者姓名的最大长度 + 1

// 构建结构模板，结构布局为book
struct book {
char title[MAXTITL];
char author[MAXAUTL];
float value;
};

int main(void)
{

struct book library;  // 把library声明为一个book类型的变量

printf_s("Please enter the book title.\n");
s_gets(library.title, MAXTITL);
printf_s("Now enter the author.\n");
s_gets(library.author, MAXAUTL);
printf_s("Now enter the value.\n");
scanf_s("%f", &library.value);
printf_s("%s by %s : $%.2f\n", library.title, library.author,
library.value);
printf_s("Done\n");

struct book library = { "the", "zhou", 23 }; // 结构变量初始化
printf_s("%s by %s : $%.2f\n", library.title, library.author,
library.value);
printf_s("Done\n");

struct book library = { .title = "you",
.value = 25.34,
.author = "i" };  // 结构变量的指定初始化器，可以不按照顺序
printf_s("%s by %s : $%.2f\n", library.title, library.author,
library.value);
printf_s("Done\n");


return 0;
}

char * s_gets(char * st, int n)
{
char * ret_val;
char * find;

ret_val = fgets(st, n ,stdin); // fgets()只能读取n - 1个字符
if (ret_val)
{
find = strchr(st, '\n');  //查找'\n',返回指针
if (find)
*find = '\0';
else
while (getchar() != '\n')
continue;
}


return ret_val;
}
*/
/* 结构数组示例 */
/*
#include<stdio.h>
#include<string.h>  // 提供strchr() protype

char *s_gets(char *st, int n);

#define MAXTITL  40  // 书籍名称长度 + 1
#define MAXAUTL  40  // 作者名字长度 + 1
#define MAXBKS   100  // 书籍的最大数量

struct book {
char title[MAXTITL];
char auther[MAXAUTL];
float value;
};

int main(void)
{
struct book library[MAXBKS];  // book类型结构数组
int count = 0;
int index;

printf_s("Press [enter] at the start of a line to stop.\n");
printf_s("Please enter the book title.\n");
while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL
&& library[count].title[0] != '\0')
{
printf_s("Now enter the auther.\n");
s_gets(library[count].auther, MAXAUTL);
printf_s("Now enter the value.\n");
scanf_s("%f", &library[count++].value);
// 清理输入行，弥补scanf_s（）遇到空格或者换行符就结束读取
while (getchar() != '\n')
//continue;
if (count < MAXBKS)
printf_s("Enter the next title.\n");
}
if (count > 0)
{
printf_s("Here is the list of your books:\n");

for (index = 0; index < count; index++)
printf_s("%s by %s ：%.2f ", library[index].title,
library[index].auther,
library[index].value);
}
else
printf_s("No books? Too bad.\n");

return 0;
}

char *s_gets(char *st, int n)
{
char * ret_val;
char * find;

ret_val = fgets(st, n, stdin);
if (ret_val)
{
find = strchr(st, '\n');
if (find)
*find = '\0';
else
while (getchar() != '\n')
continue;
}

return ret_val;
}
*/
/* 嵌套结构示例 */
/*
#include <stdio.h>

#define LEN  20

const char * msgs[5] = {
"   Thank you for the wonderful evening,",
"You certainly prove that a",
" is a special kind of guys. We must get together",
"over a delicious ",
"and have a few laughs"
};

struct name{
char first[LEN];
char last[LEN];
};

struct guy{
struct name handle;  // 嵌套
char favfood[LEN];
char job[LEN];
float income;
};

int main(void)
{
struct guy fellow = {
{ "Ewen", "Villard" },
"grilled salmon",
"personality coach",
68112.0
};

printf_s("Dear %s,\n\n",fellow.handle.first);
printf_s("%s%s", msgs[0], fellow.handle.first);
printf_s("%s%s", msgs[1],fellow.job);
printf_s("%s", msgs[2]);
printf_s("%s%s%s", msgs[3], fellow.favfood, msgs[4]);
if (fellow.income > 15000.0)
puts("!!");
else if (fellow.income > 7500.0)
puts("!");
else
puts(".");
printf_s("\n %40s%s\n", "", "see you soon");
printf_s("%40s%s\n", "", "Shalala");


return 0;
}
*/
/* 指向结构的指针 */
/*
#include<stdio.h>

#define LEN  20

// 构建结构name 占用40Bytes
struct name
{
char first[LEN];
char last[LEN];
};

// 构建结构guy 占用84Bytes
struct guy
{
struct name handle;
char favfood[LEN];
char job[LEN];
float income;
};

int main(void)
{
struct guy fellow[2] =
{
{
{ "Ewen", "Vallard" },
"grilled salmon",
"pesonality coach",
68112.0
},

{
{ "James", "White" },
"apple",
"editor",
43313.0
}

};
struct guy * him;  // 声明结构指针

printf_s("address #1 : %p  #2 : %p\n", &fellow[0], &fellow[1]);
him = fellow;  // or him = &fellow[0]
printf_s("pointer #1 : %p #2 : %p\n", him, him + 1);
printf_s("him -> income is $%.2f : (*him).income is $%.2f\n",
him->income, (*him).income);  // him->incom 即是 fellow[0].income
him++;
printf_s("him->favfood is %s, him->handle.last is %s\n",
him->favfood, him->handle.last);

return 0;
}
*/
/* 传递结构成员 */
/*
#include<stdio.h>

#define FUNDLEN  30

struct funds
{
char    bank[FUNDLEN];
double  bankfund;
char    save[FUNDLEN];
double  savefund;
};

double sum(double, double);

int main(void)
{
struct funds chris =
{
"China Bank",
40000,
"Chris's saving and loan",
424324
};

printf_s("Chris has a total of $%.2f.\n",
sum(chris.bankfund,chris.savefund));

return 0;
}

double sum(double x, double y)
{
return (x + y);
}
*/
/* 传递结构地址 */
/*
#include <stdio.h>

#define FUNDLEN  50

struct funds
{
	char    bank[FUNDLEN];
	double  bankfund;
	char    save[FUNDLEN];
	double  savefund;
};

double sum(const struct funds *);

int main(void)
{
	struct funds chris =
	{
		"China Bank",
		4000,
		"Chris's saving and loan",
		3000
	};
	printf_s("%.2lf", sum(&chris));
	return 0;
}

double sum(const struct funds * money)
{
	return(money->bankfund + money->savefund);
}
*/
/* 传递结构指针示例 */
/*
#include<stdio.h>
#include<string.h>

#define LEN  30
struct name
{
	char first[LEN];
	char last[LEN];
	int  letters;
};

void getinfo(struct name *);
void makeinfo(struct name *);
void showinfo(const struct name *);
char * s_gets(char * st, int n);

int main(void)
{
	struct name chris;

	getinfo(&chris);
	makeinfo(&chris);
	showinfo(&chris);

	return 0;
}

void getinfo(struct name * pst)
{
	printf_s("Plese enter your first name.\n");
	s_gets(pst->first, LEN);  // or s_gets((*pst).first, LEN);
	printf_s("Please enter your last name.\n");
	s_gets(pst->last, LEN);
}

void showinfo(const struct name * pst)
{
	printf_s("%s %s, your name contains %d letters.\n",
			 pst->first, pst->last, pst->letters);
}

void makeinfo(struct name * pst)  // 注意结构体函数定义
{
	pst->letters = strlen(pst->first) + strlen(pst->last);
}

char * s_gets(char * st, int n)
{
	char * ret_val;
	char * find;

	ret_val = fgets(st, n, stdin);
	if (ret_val)
	{
		find = strchr(st,'\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}

	return ret_val;
}
*/
/* 传递结构示例 */
/*
#include<stdio.h>
#include<string.h>

#define LEN 30

struct name
{	
	char first[LEN];
	char last[LEN];
	int letters;
};

struct name getinfo(void);
struct name makeinfo(struct name );
void showinfo(struct name);
char * s_gets(char *ct, int n);


int main(void)
{
	struct name person;

	person = getinfo();
	person = makeinfo(person);
	showinfo(person);

	return 0;
}

struct name getinfo(void)  // 获取信息，有返回值
{
	struct name temp;
	printf_s("Please enter your first name.\n");
	s_gets(temp.first, LEN);
	printf_s("Please enter your last name.\n");
	s_gets(temp.last, LEN);

	return temp;
}

struct name makeinfo(struct name info)  // 计算字母个数，注意有返回值
{
	info.letters = strlen(info.first) + strlen(info.last);

	return info;
}

void showinfo(struct name info)
{
	printf("%s %s %d", info.first, info.last, info.letters);

}

char * s_gets(char *ct, int n)
{
	char * ret_val;
	char * find;

	ret_val = fgets(ct, n ,stdin);  //  读取输入行
	if (ret_val)
	{
		find = strchr(ct, '\n');  // 查找换行符
		if (find)
			*find = '\0';  // 将换行符替换为 \0 
		else 
			while (getchar() != '\n')  // 处理输入行剩余部分
				continue;
	}

	return ret_val;
}
*/
/* 使用指针和malloc()示例 */
/*
#include<stdio.h>
#include<string.h>  // 提供strlen()和strcpy()原型
#include<stdlib.h>  // 提供malloc()和free()原型

#define SLEN  81

struct name 
{
	char * first;
	char * last;
	int lettlers;
};

void getinfo(struct name * ct);
void makeinfo(struct name * ct);
void showinfo(const struct name * ct);
void cleanup(struct name * ct);
char * s_gets(char *ct, int n);

int main(void)
{
	struct name person;

	getinfo(&person);
	makeinfo(&person);
	showinfo(&person);
	cleanup(&person);

	return 0;
}

void getinfo(struct name * ct)
{
	char temp[SLEN];

	printf_s("Please enter your first name.\n");
	s_gets(temp, SLEN);
	ct->first = (char *) malloc(strlen(temp) + 1);  // 分配动态内存，注意+1（留给'\0'）
	strcpy_s(ct->first, strlen(temp) + 1, temp);  // 拷贝字符串,使用strcpy_s
	printf_s("Please enter your last name.\n");
	s_gets(temp, SLEN);
	ct->last = (char *)malloc(strlen(temp) + 1);
	strcpy_s(ct->last, strlen(temp) + 1, temp);  // 拷贝字符串,使用strcpy_s

}

void makeinfo(struct name * ct)
{
	ct->lettlers = strlen(ct->first) + strlen(ct->last);
}

void showinfo(const struct name * ct)
{
	printf("%s %s %d", ct->first, ct->last, ct->lettlers);
}

void cleanup(struct name * ct)
{
	free(ct->first);  // 释放内存
	free(ct->last);
}

char * s_gets(char *ct, int n)
{
	char * ret_val;
	char * find;

	ret_val = fgets(ct, n, stdin);
	if (ret_val)
	{
		find = strchr(ct, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')  // 处理剩余输入行
				continue;
	}

	return ret_val;
}
*/
/* 复合字面量示例 */
/*
#include<stdio.h>

#define MAXTITL  41
#define MAXAUTL  31

struct book
{
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
};

int main(void)
{
	struct book readfirst;
	int score;

	printf_s("Enter your test score:");
	scanf_s("%d", &score);

	if (score >= 84)
		readfirst = (struct book){ "you", "i", 123 };
	else
		readfirst = (struct book){ "he", "you", 212 };
	printf("%s %s %.2lf", readfirst.title, readfirst.author, readfirst.value);

	return 0;
}
*/
/* 结构数组函数示例 */
/*
#include<stdio.h>

#define FUNDLEN  50
#define N  2

struct funds
{
	char    bank[FUNDLEN];
	double  bankfund;
	char    save[FUNDLEN];
	double  savefund;
};

double sum(const struct funds  money[], int n);

int main(void)
{	
	struct funds jones[N] = 
	{
		{
			"China Bank",
			123,
			"save",
			321
		},
		{
			"bank",
			234,
			"loan",
			13

		}
	};
	printf_s("%.2lf", sum(jones, N));

	return 0;
}
double sum(const struct funds  money[], int n)
{
	double total;
	int i;

	for (i = 0, total = 0; i < n; i++)
		total += money[i].bankfund + money[i].savefund;

	return total;
}
*/

/* 保存结构示例 meikan*/
/*
#include<stdio.h>
#include<stdlib.h>  // 提供strchr() 原型
#include<string.h>  

#define MAXTITL  40  // 书名字符最大值
#define MAXAUTH  40  // 作者名字字符最大值
#define MAXBKS	 10  // 最大书籍数量

char * s_gets(char * ct, int n);

struct book 
{
	char  title[MAXTITL];
	char  author[MAXAUTH];
	float value;
};

int main(void)
{
	struct book library[MAXBKS];
	int count = 0;
	int index, filecount;
	FILE * pbooks;
	int size = sizeof(struct book);

	if ((pbooks = fopen_s("book.dat", "a + b")) == NULL)
	{
		fputs("can't open book.dat file\n",stderr);
		exit(1);
	}
	rewind(pbooks);  // 定位到文件开始
	// 打印结构数组信息
	while (count < MAXBKS && fread(&library[count], 
		   size, 1, pbooks)  == 1)
	{
		if (count == 0)
			puts("Current contents of book.dat:");
		printf_s("%s by %s : $%.2f.\n", library[count].title, 
										library[count].author,
										library[count].value);
		count++;
	}
	filecount = count;
	if (count == MAXBKS)
	{
		fputs("The book.dat file is full.", stderr);
		exit(2);
	}
	puts("Please add new book titles.");
	puts("Press [enter] at the start of a line to stop");
	while (count < MAXBKS && s_gets(library[count].title, MAXTITL) != NULL
		   && library[count].title[0] != '\0')
	{
		puts("Now enter the author.");
		s_gets(library[count].author, MAXAUTH);
		puts("Now enter the value.");
		scanf_s("%f", &library[count++].value);  // 注意count++
		while (getchar() != '\n')
			continue;
		if (count < MAXBKS)
			puts("Enter the next title.");
	}
	if (count > 0)
	{
		puts("Here is the list of your books:");
		for (index = 0; index < count; index++)
			printf_s("%s by %s ； %.2f\n", library[index].title,
			library[index].author,
			library[index].value);
		fwrite(&library[filecount], size, count - filecount, pbooks);
	}
	else
		puts("No books.Bye");
	fclose(pbooks);


	return 0;
}

char * s_gets(char * ct, int n)
{
	char * ret_val;
	char * find;

	ret_val = fgets(ct, n, stdin);
	if (ret_val)
	{
		find = strchr(ct, '\n');
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')  // 输入剩余输入行
				continue;
	}

	return ret_val;
}
*/


#include<stdio.h>
int main(void)
{
	
}