#include<stdio.h>
int main()
{
	int x,y;
		printf("Enter a number ");
	scanf("%d",&x);

	do
	{
		y=y*10+x%10;
		x=x/10;
	}
	while(x!=0);

		printf("the reverse number is %d",y);
	return 0;
}

