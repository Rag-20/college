#include<stdio.h>
int main()
{
	int x;
	printf("ENter a number to check if it is prime ");
	scanf("%d",&x);

	int i,j;

	for(i=2;i<x;i++)
	{
		if(x%i==0)
		{
			printf("Entered the number is not prime");
		j=1;
		break;
		}
	} 
	if(x==2)
                {
                        printf("Entered number is prime");
               j=2; 
		}

	if(j==0)
		printf("Entered number is  prime");
return 0;
}

