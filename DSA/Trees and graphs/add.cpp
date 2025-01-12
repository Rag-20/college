// Simple C++ program to add two polynomials
#include <iostream>
using namespace std;

int max(int m, int n) { return (m > n) ? m : n; }

int* add(int A[], int B[], int m, int n)
{
    int size = max(m, n);
    int* sum = new int[size];

    for(int i=0;i<=size;i++)
     sum[i]=0;
    // Initialize the product polynomial
    for (int i = 0; i <= m; i++)
        sum[i] = A[i];

    // Take every term of first polynomial
    for (int i = 0; i <= n; i++)
        sum[i] += B[i];

    return sum;
}

// A utility function to print a polynomial
void printPoly(int poly[], int n)
{
    for (int i = 0; i <= n; i++) {
        cout << poly[i];
        if (i != 0)
            cout << "x^" << i;
        if (i != n)
            cout << " + ";
    }
}
void accept(int a[],int n){
    for (int i = 0; i <=n; i++) {
        cout << "Enter coeff of x^" << i<<" : ";
        cin>>a[i];        
    }
}
// Driver program to test above functions
int main()
{
    int m;
    cout<<"Enter degree of 1st polynomial : ";
    cin>>m;
    int a[m];
    accept(a,m);
    
    int n;
    cout<<"Enter degree of 2nd polynomial : ";
    cin>>n;
    int b[n];
    accept(b,n);

    cout << "First polynomial is \n";
    printPoly(a, m);
    cout << "\nSecond polynomial is \n";
    printPoly(b, n);

    int* sum = add(a, b, m, n);
    int size = max(m, n);

    cout << "\nsum polynomial is \n";
    printPoly(sum, size);

    return 0;
}