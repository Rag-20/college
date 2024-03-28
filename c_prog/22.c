#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter a number ");
	scanf("%d",&x);

	do
	{
		x=x/10;
		y++;
	}
	while(x!=0);

	printf("Number of digits in your number is %d ",y);

	return 0;
}
