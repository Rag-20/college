#include<stdio.h>
int main()
{
	char x;
	int i,n;
	printf("Enter a character ");
	scanf("%c",&x);
	printf("Enter the number of characters to be displayed ");
	scanf("%d",&n);
printf("The next %d characters are ",n);
        for(i=1;i<=n;i++)
	{
	   x++;
	   printf("%c ",x);
	}
	return 0;
}


