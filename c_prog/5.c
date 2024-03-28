#include<stdio.h>
int main()
{
	float a,b,w,e;
	printf("Enter two numbers \n");
	scanf("%f %f",&a,&b);

	e=(a+b)/2;
	w=a*b/(a+b);

	printf("AM is %f\nGM is %f\n",e,w);
	return 0;
}

