#include<stdio.h>
int main()
{
	int x,y,z,a;
	int i;

	x=0;y=1;z=1;

	printf("Enter a number upto which you need fibonacci sequence ");
	scanf("%d",&a);

	printf("Fibonacci series is 0 1 1 ");
	for(i=1;i<=a;i++)
	{
		x=y;
		y=z;
		z=x+y;

		printf("%d ",z);
	}
	return 0;
}
