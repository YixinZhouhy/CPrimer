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
#include <stdio.h>

#define LEN  20

const char * msgs[5] = {	
	"   Thank you for the wonderful evening,",
	"You certainly prove that a",
	"is a special kind of guys. We must get together",
	"over a delicious ",
	"and have a few laughs"
};

struct name{
	char first[LEN];
	char last[LEN];
};

struct guy{
	struct name handle;
};