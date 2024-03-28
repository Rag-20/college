#include<stdio.h>
int main()
{
	int i,n;
	printf("How many elements are you going to enter");
	scanf("%d",&n);

	int a[n];
	int *p;
	p=a;

	printf("ENter the array elements ");
	for(i=0;i<n;i++)
        {
                scanf("%d",&a[i]);
        }

	printf("\nThe array is\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}

printf("The reversed array is\n");
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",*(p+i));
	}

	return 0;
}
