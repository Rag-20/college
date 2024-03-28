#include<stdio.h>
int main()
{
	double r,h,s,v;
	printf("\nEnter the radius of the cylinder ");
	scanf("%lf",&r);
	printf("\n Enter the height of the cylinder ");
	scanf("%lf",&h);

	s=2*3.142*r*r + 2*3.142*r*h;
	v=3.142*r*r*h;

	printf("\nSurface area of cylinder is %lf",s);
        printf("\n Volume of the cylinder is %lf\n\n",v);
	return 0;
}

