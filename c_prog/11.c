#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	char c;
	printf("\nEnter a character ");
	scanf("%c",&c);
for(i=48;i<58;i++)
{

		if(i==c)
		{
			printf("\nThe entered character is a digit\n");
		exit(0);
		}
		
}
	printf("\nThe entered character is not a digit\n");
	return 0;
}
