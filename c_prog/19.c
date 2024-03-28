#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter the number to find sum of numbers starting from ");
	scanf("%d",&x);
	printf("to ");
	scanf("%d",&y);

	int i,a;

	for(i=x;i<=y;i++)
	{
		a=a+i;
	}

	printf("The sum is %d ",a);\
		return 0;
}

