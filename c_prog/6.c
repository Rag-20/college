#include<stdio.h>
int main()
{
	float l,b,h,s,v;
	printf("\nEnter the length of the cuboid ");
	scanf("%f",&l);
	 printf("\nEnter the breadth of the cuboid ");
	 scanf("%f",&b);
	  printf("\nEnter the height of the cuboid ");
	  scanf("%f",&h);

	  s=2*(l+b+h);
	  v=l*b*h;

	   printf("\nVolume of the cuboid is %f and surface area is %f \n",v,s);
	   return 0;
}
