#include<stdio.h>
#include<string.h>
int main()
{
	int i,n,l;

	char s[30];
	printf("Enter your string\n");
	fgets(s,30,stdin);

	char ch;
	printf("Enter a character to check ");
	scanf("%c",&ch);

	n=strlen(s);
	for(i=0;i<n;i++)
	{
		if(s[i]==ch)
		{
			l++;
		}
	}

	printf("Number of occurance = %d",l);
	return 0;
}

