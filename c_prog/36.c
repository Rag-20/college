#include<stdio.h>
int rev(int);
int main()
{
	int c,x;

	printf("Enter a number ");
	scanf("%d",&x);

	c=rev(x);

	printf("sum of number to digit is %d",c);
	return 0;
}
int rev(int x)
{
	int a,b;
	
	if(x<10&&x>0)
	{
		return x;
	}

	a=x%10;
	x=x/10;

	b=a+rev(x);

	if(b<10&&b>0)
	{
		return b;
	}
	else
	{
		rev(b);
	}
}
