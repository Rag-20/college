#include<stdio.h>
int main()
{
	float u,a,t,v,s;
	printf("\nEnter the inital velocity m/s ");
	scanf("%f",&u);
	 printf("\nEnter accelaration in m/s2  ");
	 scanf("%f",&a);
	  printf("\nEnter time in secs ");
	  scanf("%f",&t);

	  v=u+a*t;
	  s=u+a*t*t;

	   printf("\nthe final velocity is %fm/s and the distance covered is %fm\n\n",v,s);

	   return 0;
}
