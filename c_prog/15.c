#include<stdio.h>
#include<stdlib.h>
int main()
{
        char c;
        printf("\nEnter a character ");
        scanf("%c",&c);

            if(c>=97&&c<=122)
                {
                        printf("\nThe given character is a lower case\n");
                        exit(0);
                }

	    else if(c>=65&&c<=90)
                {
                        printf("\nThe given character is an upper case\n");
                        exit(0);
                }

	     else if(c>=48&&c<=57)
                {
                        printf("\nThe given character is a digit\n");
                        exit(0);
                }
  else
  {
	  printf("\n Not a digit or uppercase or a lower case\n");

  }
  return 0;
}
