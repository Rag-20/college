#include<stdio.h>
float tax(float sal);
int main()
{
	float c,sal;
	printf("\nEnter the salary ");
	scanf("%f",&sal);
        c=tax(sal);
	printf("\nThe income tax for your income is %f",c);
}

float tax(float sal)
{
	float t;
	if(sal>300000)
	{
		t=0.3*sal;
	}
	else if(sal<=300000&&sal>=150000)
	{
		t=0.2*sal;
	}
	else
	{
		t=0;
	}
	return t;
}
