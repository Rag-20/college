#include<stdio.h>
int power(int,int);
int main()
{
	int c,x,y;

	printf("Enter a number ");
	scanf("%d",&x);
	 printf("Enter the power ");
        scanf("%d",&y);

	c=power(x,y);
	printf("Power is %d",c);
	return 0;
}
int power(int x,int y)
{
	int c;
	
	if(y==1)
	{return x;}

	c=x*power(x,y-1);
	return c;
}
