#include<stdio.h>
int main()
{
	int x,y;
	printf("Enter a number ");
	scanf("%d",&x);
	printf("Enter the power ");
	scanf("%d",&y);

	int i,a=1;
	for(i=0;i<y;i++)
	{
		a=a*x;
	}

	printf("The answer is %d",a);
	return 0;
}

