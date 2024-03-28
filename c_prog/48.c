#include<stdio.h>
#include<stdlib.h>
int min(int a,int b);
int max(int a,int b);
int amin(int p[], int n);
int amax(int p[], int n);
int main()
{
	int n;
	printf("How many integers are you going to enter?? ");
	scanf("%d",&n);

	int *p= (int*)calloc(n,sizeof(int));
	
	printf("Enter the data\n");

	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}

	int max=amax(p,n);
        int min=amin(p,n);
        printf("Range of elements in array is %d to %d\n",min,max);
    	return 0;
}


int min(int a,int b)
{
  int min=a;
  if(min>b)
  {
    min=b;
  }
  return min;
}

int max(int a,int b)
{
  int max=a;
  if(max<b)
  {
    max=b;
  }
return max;
}

int amin(int p[], int n)
{
    int i;
    int k = p[0];
    for (i=1;i<n;i++)
    {
        k=min(k,p[i]);  //checks for all array elements
    }
    return k;
}

int amax(int p[], int n)
{
    int i;
    int k = p[0];
    for (i=1;i<n;i++)
    {
        k=max(k,p[i]);
    }
    return k;
}
