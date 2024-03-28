#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int main()
{
	int n;double x,y;
	
	printf("\n1.Sine\n2.Cosine\n3.log\n4.sqrt\n5.exit\n\n");
	printf("Enter you choice (number) ");
        scanf("%d",&n);
	
	if(n==5)
	{
		 exit(0);
	}

	printf("\nEnter a number (in degree for sin and cos) ");
        scanf("%lf",&x);

	
	{
	switch(n)
		{	
	case 1:
		y= sin(x*3.142/180);
		break;

	case 2:
		y= cos(x*3.142/180);
		break;

	case 3:
		y= log(x);
		break;

	case 4:
		y= sqrt(x);
		break;



	}}
		printf("\nYour answer is %lf \n",y);

		return 0;
}

