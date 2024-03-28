#include<stdio.h>
 int i,j,r,c;
 void accept(int r,int c,int m[r][c]);
 void display(int r,int c,int m[r][c]);
 void transpose(int b[c][r],int a[r][c]);

 int main()
{
    printf("Enter the number of rows = ");
    scanf("%d",&r);
    printf("Enter the number of column = ");
    scanf("%d",&c);

    int a[r][c],b[c][r];
    
    printf("Enter the elements of array\n");
    
    accept(r,c,a);
    
    printf("The input matrix is\n");
    display(r,c,a);
    
    transpose(b,a);

    printf("The output matrix is\n");
    display(c,r,b); 
    return 0;
 }

void accept(int r,int c,int m[r][c])
{
for (i=0; i<r; i++)
    {
        for (j=0; j<c; j++)
        {
             printf("a[%d][%d] = ",i,j);
             scanf("%d",&m[i][j]);
        }
    }
printf("\n");
}

void display(int r,int c,int m[r][c])
{
     for (i=0; i<r; i++)
     {
        for (j=0; j<c; j++)
	{
             printf(" %d",m[i][j]);
        }
        printf("\n");
    }
}

void transpose(int b[c][r],int a[r][c])
{
    for(i = 0 ; i<c; i++ )
    {
        for(j=0 ; j<r; j++)
	{
            b[i][j] = a[j][i];
        }

    }
 }
