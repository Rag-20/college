#include<stdio.h>
int even();

int main()
{
	int x;
	 x=even();
	 printf("\neven if output is 1 and odd if output is 0\n\nOutput = %d",x);
	
	 return 0;
}

int even()
{
	int n;
	printf("Enter a number to find if it is even ");
	scanf("%d",&n);
         
	if(n%2==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
