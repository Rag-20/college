#include<stdio.h>
int reverse(int);
int main()
{
	int c,n;
	printf("Enter a number ");
	scanf("%d",&n);

	printf("Reverse number is ");
	c=reverse(n);
  	printf("%d ",c);
	return 0;
}

int reverse(int n)
{
	int a;
	
	if(n>0&&n<10)
	{
		return n;
	}

	a=n%10;
	n=n/10;
 printf("%d ",a);
reverse(n);

}
