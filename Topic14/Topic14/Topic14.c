/* �ṹ�����ʾ�� */
/*
#include <stdio.h>
#include <string.h>

char * s_gets(char * st, int n);

#define MAXTITL  41  // ��������󳤶� + 1
#define MAXAUTL  31  // ������������󳤶� + 1 

// �����ṹģ�壬�ṹ����Ϊbook
struct book {
	char title[MAXTITL];
	char author[MAXAUTL];
	float value;
			};

int main(void)
{
	
	struct book library;  // ��library����Ϊһ��book���͵ı���

	printf_s("Please enter the book title.\n");
	s_gets(library.title, MAXTITL);
	printf_s("Now enter the author.\n");
	s_gets(library.author, MAXAUTL);
	printf_s("Now enter the value.\n");
	scanf_s("%f", &library.value);
	printf_s("%s by %s : $%.2f\n", library.title, library.author,
			library.value);
	printf_s("Done\n");

	struct book library = { "the", "zhou", 23 }; // �ṹ������ʼ��
	printf_s("%s by %s : $%.2f\n", library.title, library.author,
	library.value);
	printf_s("Done\n");

	struct book library = { .title = "you",
						    .value = 25.34,
						    .author = "i" };  // �ṹ������ָ����ʼ���������Բ�����˳��
	printf_s("%s by %s : $%.2f\n", library.title, library.author,
			 library.value);
	printf_s("Done\n");


	return 0;
}

char * s_gets(char * st, int n)
{
	char * ret_val;
	char * find;

	ret_val = fgets(st, n ,stdin); // fgets()ֻ�ܶ�ȡn - 1���ַ�
	if (ret_val)
	{
		find = strchr(st, '\n');  //����'\n',����ָ��
		if (find)
			*find = '\0';
		else
			while (getchar() != '\n')
				continue;
	}


	return ret_val;
}
*/
/* �ṹ����ʾ�� */
/*
#include<stdio.h>
#include<string.h>  // �ṩstrchr() protype

char *s_gets(char *st, int n);

#define MAXTITL  40  // �鼮���Ƴ��� + 1
#define MAXAUTL  40  // �������ֳ��� + 1
#define MAXBKS   100  // �鼮���������

struct book {
	char title[MAXTITL];
	char auther[MAXAUTL];
	float value;
};

int main(void)
{
	struct book library[MAXBKS];  // book���ͽṹ����
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
		// ���������У��ֲ�scanf_s���������ո���߻��з��ͽ�����ȡ
		while (getchar() != '\n')
			//continue;   
		if (count < MAXBKS)
			printf_s("Enter the next title.\n");
	}
	if (count > 0)
	{
		printf_s("Here is the list of your books:\n");

		for (index = 0; index < count; index++)
			printf_s("%s by %s ��%.2f ", library[index].title,
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
/* Ƕ�׽ṹʾ�� */
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