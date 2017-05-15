#include<stdio.h>
void smile(void);
int main(void)
{
	int num;

	num = 1;

	printf("I am a simple ");
	printf("computer.\n");
	printf("My favorite number is %d because it is first.\n", num);
	smile();
	return 0;

}
void smile(void)
{
	printf("smile\t");
}