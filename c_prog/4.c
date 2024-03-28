#include<stdio.h>
int main()
{
	float i,o,s,a;
	printf("\nEnter the inner radius of the ring in m ");
	scanf("%f",&i);
	printf("\nEnter the outer radius of the ring in m ");
	scanf("%f",&o);

	s=(i+o)*2*3.142;
	a=(o*o-i*i)*3.142;

	 printf("\nPerimeter of the ring is %fm and area is %fm2 \n",s,a);

	 return 0;
}
