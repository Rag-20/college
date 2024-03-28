#include<stdio.h>

int linearsearch(int x,int a[],int n);

int main()
{
	int k,n,x,i;
	printf("How many numbers do you want to store ??? ");
	scanf("%d",&n);
	
	int a[n];
	printf("\nEnter the numbers to store\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	printf("\nEnter the key element to search in the array!!! ");
	scanf("%d",&x);

k=linearsearch(x,a,n);

if(k==-1)
{
	printf("\nElement not found");
}
return 0;


}

int linearsearch(int x,int a[],int n)
{
	int j,l;
for(j=0;j<n;j++)
{
	if(a[j]==x)
	{
		printf("\nElement found at %d",j+1);
		l=2;
	}
	else{
		l=-1;
	}
}
	return l;
}


