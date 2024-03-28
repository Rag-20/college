#include<stdio.h>
#include<string.h>
int check(char *,char);
int main()
{
	char str[30];
	char a;

	printf("Enter a string\n");
	fgets(str,30,stdin);

	printf("Enter a character to search in string:- ");
	scanf("%c",&a);
int y;
	y=check(str,a);
	
	printf("Output is %d",y);
	return 0;
}
int check(char *str,char a)
{
	int x=1,i;
	for(i=0;i<30;i++)
	{
	if(str[i]==a)
	{
		return (i+1);
	}
	if(str[i]=='\0')
	{
		return -1;
	}
	}
}
