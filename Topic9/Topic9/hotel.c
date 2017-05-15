#include<stdio.h>
#include "hotel.h"

int menu(void)
{
	int code, status;


	printf_s("%s\n", STARS);
	printf_s("Enter the number of the desired hotel:\n");
	printf_s("1) one    2) two\n");
	printf_s("3) three  4) four\n");
	printf_s("5) quit\n");
	printf_s("%s\n", STARS);
	while ((status = scanf_s("%d", &code)) != 1 ||
		   (code > 5 || code < 1))
	{
		//if (status != 1)
		//	scanf_s("%*s");
		printf_s("Enter an integer from 1 to 5, please.\n");
	}
	return code;
}

int getnight(void)
{
	int nights;


	printf_s("How many nights are needed?\n");
	while (scanf_s("%d", &nights) != 1)
	{
	//	scanf_s("%*s");  //
		printf_s("Please enter an integer, such as 2 .\n");
	}

	return  nights;
}

void showprice(double rate, int nights)   //rate £º·¿¼Û
{
	int n;
	double total = 0.0;
	double factor = 1.0;


	for (n = 1; n <= nights; n++, factor *= DISCOUNT)
		total += rate * factor;
	printf_s("The total cost will be $%.2f.\n", total);

}