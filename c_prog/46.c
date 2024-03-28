#include<stdio.h>
void display(int,int,int,int);
int main()
{
	int h,m,s,w;
	printf("Time in 24 hrs format\n\nEnter hours ");
	scanf("%d",&h);
	printf("Enter minutes ");
        scanf("%d",&m);
	printf("Enter seconds ");
        scanf("%d",&s);

	printf("Enter the increment in time in seconds");
	scanf("%d",&w);

	display(h,m,s,w);
	return 0;
}

void display(int h,int m,int s,int w)
{
	int s1,m1,h1;
	int a,b,c;
	s1=(s+w)%60;
	a=(s+w)/60;

	m1=(m+a)%60;
	b=(m+a)/60;

	h1=(h+b)%24;
	
	if(s1<10&&m1<10&&h1<10)
        {
                printf("Updated time is 0%d:0%d:0%d ",h1,m1,s1);
        }
	else if(s1<10&&m1<10)
        {
                printf("Updated time is %d:0%d:0%d ",h1,m1,s1);
        }
        else if(s1<10&&h1<10)
        {
                printf("Updated time is 0%d:%d:0%d ",h1,m1,s1);
        }
        else if(m1<10&&h1<10)
        {
                printf("Updated time is 0%d:0%d:%d ",h1,m1,s1);
        }
	else if(s1<10)
        {
                printf("Updated time is %d:%d:0%d ",h1,m1,s1);
        }
	else if(m1<10)
        {
                printf("Updated time is %d:0%d:%d ",h1,m1,s1);
        }
	else if(h1<10)
        {
                printf("Updated time is 0%d:%d:%d ",h1,m1,s1);
        }
	else 
	{
                printf("Updated time is %d:%d:%d ",h1,m1,s1);
        }
}

