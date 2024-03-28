#include<stdio.h>
int main()
{
	int y;
	printf("Enter a year");
	scanf("%d",&y);

	if(y%4==0&&y%100!=0)
	{
		printf("It is a leap year");
	}
	else if(y%400==0)
	{
		printf("It is a leap year");
	}
	else
	{
		printf("Not a leap year");
	}
	return 0;
}


