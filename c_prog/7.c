#include<stdio.h>
int main()
{
	char ch;
	printf("\nEnter a character ");
	scanf("%c",&ch);

	printf("\nThe previous character is %c",--ch);
printf("\nThe next character is %c\n\n",ch+2);
return 0;
}
