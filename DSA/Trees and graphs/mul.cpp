// Simple C++ program to multiply two polynomials 
#include <bits/stdc++.h> 
using namespace std; 

int *multiply(int A[], int B[], int m, int n) 
{ 
int prod[m+n]; 

for (int i = 0; i<=m+n; i++) 
	prod[i] = 0; 

// Multiply two polynomials term by term 

// Take ever term of first polynomial 
for (int i=0; i<=m; i++) 
{ 
	// Multiply the current term of first polynomial 
	// with every term of second polynomial. 
	for (int j=0; j<=n; j++) 
		prod[i+j] += A[i]*B[j]; 
} 

return prod; 
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
    cout<<endl;
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
    cout<<"\nEnter degree of 1st polynomial : ";
    cin>>m;
    int a[m];
    accept(a,m);
    
    int n;
    cout<<"\nEnter degree of 2nd polynomial : ";
    cin>>n;
    int b[n];
    accept(b,n);


	cout << "First polynomial is "; 
	printPoly(a, m); 
	cout<< "Second polynomial is "; 
	printPoly(b, n); 

	cout<< "Product polynomial is "; 
	int *prod = multiply(a, b, m, n); 
    printPoly(prod, m+n); 

	return 0; 
} 
