#include<stdlib.h>
#include<stdio.h>
#include<string.h>
void stcat(char*);
void stcmp(char*);
void strev(char*);
void stupr(char*);
int main()
{
	int n;
	char s[50];
	char x[50];
	printf("Enter a string\n");
	fgets(s,50,stdin);

	printf("\n1.Concatenate\n2.Compare\n3.Reverse\n4.Upper case\n5.exit\n\n");
	printf("Enter you choice (number) ");
        scanf("%d",&n);
		
    	if(n==5)
	{
	 exit(0);
	}

	
	{
	switch(n)
		{	
	case 1:
		stcat(s);
		break;

	case 2:
		stcmp(s);
		break;

	case 3:
		strev(s);
		break;

	case 4:
		stupr(s);
		break;



	}}
		
		return 0;
}


void stcat(char* s)
{
	char p[50];
	while ((getchar())!= '\n');               //used to clear \n by scanf so fgets can accept
	printf("Enter a string to concatenate \n");
        fgets(p,50,stdin);

	int i;
	char o[100];
	
	int x=strlen(s);
	int y=strlen(p);

	for(i=0;i<x-1;i++)
	{	
		o[i]=s[i];
	}

	int j=0;
	for(i=x-1;i<(x+y);i++)
	{
		o[i]=p[j];
		j++;
	}

	printf("output is\n%s\n",o);
}



void stcmp(char* s)
{
       int i;
       int j=strlen(s);

       char p[50];
       while ((getchar())!= '\n');               //used to clear \n by scanf so fgets can accept
       printf("Enter a string to compare \n");
       fgets(p,50,stdin);
       
       int k=strlen(s);
       int f=0;
       
       if(j==k)
       {
            for(i=0;i<j;i++)
                {
                	if(s[i]!=p[i])
			{
				f=1;
				printf("Output Not Equal");
				break;
			}

                }
       }
       else{printf("Output Not Equal");}

       if(f==0)
       {
	       printf("Output Equal");
       }   
}




void strev(char* s)
{
	int i;
	char temp;	
	int j=strlen(s);
        
    	int x=j-2;
	s[j-1]='\n';
	    
	for(i=0;i<j/2;i++)
               {
                   temp=s[i];
		   s[i]=s[x];
		   s[x]=temp;
		   x--; 
	       }

	printf("Reverse string is %s\n",s);
}


void stupr(char* s)
	{
		int i;
		for(i=0;i<50;i++)
		{
			if(s[i]>=97&&s[i]<122)
			{
				s[i]=s[i]-32;
			}
		}
		printf("%s",s);
	}
