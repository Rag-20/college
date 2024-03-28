#include<stdio.h>
int main()
{
	int max,min,x,y,z;
	printf("\nEnter 3 numbers \n");
	scanf("%d%d%d",&x,&y,&z);

if(y<z)
{
	min=y;
	max=z;
}
else
{
min=z;
max=y;
}

	if((x<z&&x>y)||(x<y&&x>z))
	{
		printf("\n%d is in between %d and %d\n\n",x,min,max);
	}
else
printf("\n%d is not in between %d and %d\n\n",x,min,max);
	return 0;
	}
