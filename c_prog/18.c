#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number upto which you have to find even numbers ");
	scanf("%d",&a);

	int i;
 printf("\n even numbers are ");
	for(i=0;i<=a;i++)
	{
		printf(" %d ",i);
		i++;
	}
	return 0;
}
