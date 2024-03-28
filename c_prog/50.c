#include<stdio.h>
#include<string.h>
int palin();
int main()
{
	int y;
	y=palin();

	printf("\nOutput %d",y);
	return 0;
}
int palin()
{
	char s[30];
	printf("Enter a string to check if it is palindrome\n");
	fgets(s,30,stdin);

	char b[30];

	int x=strlen(s);
int i,j=x-2;

	for(i=0;i<x;i++)
	{
		b[i]=s[j];
	j--;	
	}
	b[x-1]='\n';

int f;
for(i=0;i<x;i++)
{
if(s[i]!=b[i])
{
 f=1;
 break;
}
}

if(f==1)
{
	return 0;
}
else
{
	return 1;
}
}
