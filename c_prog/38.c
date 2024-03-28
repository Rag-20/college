#include <stdio.h>
//void accno(int n);
int main()
{
	int n,i,m;
  	printf("how many numbers do you want to enter");
 	scanf("%d",&n);

//to accept array
	
	
	int a[n];
	for(i=0;i<n;i++)
	{
top:
		scanf("%d",&m);
		
		if((m<=25)&&(m>=1))
		{
			a[i]=m;
			m=0;
		}
		else
		{
			printf("please enter numbers between 1-25");
			goto top;
		}

		
	}




//to check occurance

	int j,k=1;
int temp;
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


	return 0;
	
}
