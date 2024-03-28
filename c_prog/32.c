#include<stdio.h>
int sum(int);
int main()
{
	int n,y;
	printf("Enter the number ");
        scanf("%d",&n);

	y=sum(n);
	 printf("Sum is %d ",y);
return 0;
}

int sum(int n)
{
	int x,y;
	if(n<10&&n>0)
	{
		return n;
	}

	x=n%10;
	n=n/10;
	y=x+sum(n);	
	return y;
}
