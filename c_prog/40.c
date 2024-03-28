#include<stdio.h>
int* accept_array(int *x,int);
void count(int a[],int);
int main()
{
 int* x;
	 int a[20];
int n;
printf("how many numbers do you want to enter");
        scanf("%d",&n);

	
	x=accept_array(a,n);
	count(x,n);
	return 0;

}

int* accept_array(int *x,int n)
{

        int i;
   //to accept array

printf("enter array");
 	
 	for(i=0;i<n;i++)
        {
                scanf("%d",&x[i]);
	}
	return x;
}

void count(int a[],int n)
{
	int i,j,k=1;
        for(i=0;i<n;i++)
        {
                if(a[i]==0)
		{
			 for(j=i+1;j<n;j++)
                {
                        if(a[i]==a[j])
                        {
                                
                                k++;
                        }
		}

			  if(k>=2)
                {
                        printf("the number %d occurs %d times\n",a[i],k);
                }
                else
                {
                        printf("the number %d occurs 1 time\n",a[i]);
                }
                k=1;
		break;//to check zero only once
                }
	}





 for(i=0;i<n;i++)
        {
		if(a[i]!=0)
                {

                for(j=i+1;j<n;j++)
                {
                        if(a[i]==a[j])
                        {
                                a[j]=0;
                                k++;
                        }
                }
                if(k>=2)
                {
                        printf("the number %d occurs %d times\n",a[i],k);
                }
                else
                {
                        printf("the number %d occurs 1 time\n",a[i]);
                }
                k=1;

                }

        }
}
