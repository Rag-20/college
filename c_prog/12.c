#include<stdio.h>
int main()
{
	int x;
	printf("\nEnter a number ");
	scanf("%d",&x);

	if(x%5==0&&x%7==0)
	{
		printf("\nThe number is divisible by 5 and 7\n");
	}
	else
	{
		printf("\nThe number is not divisible by 5 and 7 \n");
	}

	return 0;
}
