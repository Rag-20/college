#include<stdio.h>
#include<stdlib.h>
int main()
{
	char c,d;
	int i;
        printf("\nEnter a lower case character ");
	scanf("%c",&c);
      
            if(c<=96||c>=123)
		{
			printf("\nNot a lower case\n");
			exit(0);
		}


	

	if(c==97||c==101||c==105||c==111||c==117)
	{
		printf("\n The entered character is a vowel\n");
	}
	else
	{
		printf("\n The entered character is a consonant");
	}
	return 0;
}

