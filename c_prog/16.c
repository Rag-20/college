#include<stdio.h>
int main()
{
	int h,m,s;
	printf("Enter the time in hours");
       scanf("%d",&h);
       printf("Enter the time in minutes");
       scanf("%d",&m);
       printf("Enter the time in secs");
			scanf("%d",&s);

			if((h<=24&&h>=0)&&(m<=60&&m>=0)&&(s>=0&&s<=60))
				{
				printf("The entered time is valid");
				}
				else{printf("time is not valid");}

				return 0;
				}

