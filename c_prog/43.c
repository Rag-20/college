#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,i,j,m;

	printf("Enter the cardinality of first set");
	scanf("%d",&n);
	 printf("Enter the cardinality of second set");
        scanf("%d",&m);


int a[n],b[m];
	      int inter[m];

			int uni[m];
			int uni1[m];
	printf("Enter the elements of first set\n");



for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}

	printf("Enter the elements of second set\n");

for(i=0;i<m;i++)
{
        scanf("%d",&b[i]);
}

//////////intersection//////////
int k=0;


for(i=0;i<n;i++)
{
	for(j=0;j<m;j++)
	{
		if(a[i]==b[j])
		{
			inter[k]=a[i];
			k++;
		}
				
	}
}

printf("Intersection is ");
for(i=0;i<k;i++)
{
printf("%d ",inter[i]);
}


////////union=(intersection + left out elements in first and second set)
int t,l=0;

for(i=0;i<n;i++)
{
 t=0;

        for(j=0;j<k;j++)
        {
                if(a[i]==inter[j])             //checking for left out
					       //element in first array
                {
                        t++;
		}

        }
	if(t==0)
	{
	uni[l]=a[i];
	l++;
	}
}

int u=0;
for(i=0;i<m;i++)
{
	t=0;
        for(j=0;j<k;j++)
        {
                if(b[i]==inter[j])             //checking for left out
                                               //element in second array
                {
                          t++;
                }

        }
	if(t==0)
	{
		uni1[u]=b[i];
		u++;
	}
}



printf("\nUnion is ");
for(i=0;i<k;i++)
{
printf("%d ",inter[i]);
}
for(i=0;i<l;i++)
{
printf("%d ",uni[i]);
}
for(i=0;i<u;i++)
{
printf("%d ",uni1[i]);
}


return 0;
}

