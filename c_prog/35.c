#include<stdio.h>
int fibo(int);
int main()
{
        int c,x;

        printf("Enter number of terms you want to print  ");
        scanf("%d",&x);
        int i;
	
	printf("fibonacci series is ");
	for(i=0;i<x;i++)
	{
        c=fibo(i);
	printf("%d ",c);
	}
        return 0;
}
int fibo(int x)
{
        int c;

        if(x==0)
        {return 0;}
	
	if(x==1) 
	{
		return 1;
	}

        c=fibo(x-2)+fibo(x-1);
        return c;
}
