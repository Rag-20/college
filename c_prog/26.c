#include<stdio.h>
#include<stdlib.h>
int main()
{
        char c;
	int i;
        printf("\nEnter a character to check if it is alphabet,digit,punctuation and to convert lowercase to upper case ");
        scanf("%c",&c);
if((c>=97&&c<=122)||(c>=65&&c<=90))
{
  printf("\nThe entered character is alphabet \n");
            if(c>=97&&c<=122)
                {
                        printf("\nThe given character is a lower case\n");
                        i=c-32;
			printf("\nThe upper case of given character is %c \n",i);
			exit(0);
                }

            else if(c>=65&&c<=90)
                {
                        printf("\nThe given character is an upper case\n");
			 i=c+32;
                        printf("\nThe lower case of given character is %c \n",i);
                        exit(0);
                }
}

             else if(c>=48&&c<=57)
                {
                        printf("\nThe given character is a digit\n");
                        exit(0);
                }
	    else if(c>=33&&c<=53)
	    {
		    printf("The given character is a punctuation\n");
		    exit(0);
	    }
else
printf("invalid input\n");
return 0;
}

