#include<stdio.h>
int character();
int main()
{
        character();
        return 0;
}

int character()
{
        char a,i;
	int n;
        printf("Enter a character ");
        scanf("%c",&a);
 
	printf("Enter the number of next characters to be displayed ");
	scanf("%d",&n);
printf("The next %d characters are ",n);
        for(i=1;i<=n;i++)
        {
                a=a+1;
                printf("%c ",a);
        }
}
