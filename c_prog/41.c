#include<stdio.h>
int main()
{
        //int a[m];
	int x,n;
	printf("How many numbers are you going to enter?");
	scanf("%d",&n);
	int i,j,k,m=0;
	 int a[n];
for(j=0;j<n;j++)
{

 printf("ENter a number ");
        scanf("%d",&x);


        	
		for(i=2;i<x;i++)
                 {  
                      if(x%i==0)
                    {
                     k=1;
                     break;
                    } 
		      k=0;
                 } 
	
	 if(x==2)
	        {
                    k=2;
                }
           else if(x==1)
	   {
		   k=1;}
             
     
	if(k==2||k==0)
	{
		a[m]=x;
		m++;
	        
	}
}

for(i=0;i<m;i++)
{
	printf("%d ",a[i]);
}

return 0;
}
