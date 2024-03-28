#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void binary(int n)
{
	 int a,b;
	
	
	a=n;
	int* ptr=(int*)malloc(1*4);

	int i=0;
	while(a!=0)
	{
	b=a%2;
	a=a/2;
	*(ptr+i)=b;
	i++;
	}
printf("binary conversion is ");
if(ptr!=NULL)
{	
for(i=i-1;i>=0;i--)
	{
		printf("%d",*(ptr+i));
	}
}
else
printf("\n size of malloc is exceeded");
}

int main()
{
	int i;
	int n;
	printf("ENter the decimal number you want to convert ");
	scanf("%d",&n);

	binary(n);		
return 0;
}
	
