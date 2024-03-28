#include<stdio.h>
#include<string.h>
int main()
{
	int i,n;

	char s[50];
	printf("Enter a sentence\n");
	fgets(s,50,stdin);

	n=strlen(s);

	for(i=0;i<n;i++)
	{
		if(s[i]==' ')
		{
			s[i]='*';
		}
		else if(s[i]>=48&&s[i]<=57)
		{
			s[i]='?';
		}
		else if(s[i]>=97&&s[i]<=122)
		{
			s[i]=s[i]-32;
		}
		else if(s[i]>=65&&s[i]<=90)
                {
                        s[i]=s[i]+32;
                }
		else
			continue;
	}
	printf("%s",s);
	return 0;
}
