#include<stdio.h>
int gcd(int,int,int);
int main()
{
	int a,b,y,x;

	printf("Enter two number to find GCD \n");
	scanf("%d",&a);
	scanf("%d",&b);
	
	int temp;
	if(a>b)
	{
		temp=a;
		a=b;
		b=temp;
	}
	x=a;//minimum
	y=gcd(a,b,x);

	printf("Gcd is %d",y);
	return 0;
}
int gcd(int a,int b,int x)
{
	int y;
	if(x==1)
	{
		return 1;
	}

	if(a%x==0&&b%x==0)
	{
		return x;
	}
	else{x--;}

	y=gcd(a,b,x);

	return y;
}
