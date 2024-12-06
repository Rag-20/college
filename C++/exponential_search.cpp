#include<bits/stdc++.h>
using namespace std;
int binary_search(int a[],int s, int e,int x){
    
    while(s<=e){
        int mid=(s+e)/2;
        if(a[mid]==x){
            return mid;
        }
        if(a[mid]<x){
            s=mid+1;
        }
        if(a[mid]>x){
            e=mid-1;
        }
    }
    return -1;
}

int exponential_search(int a[],int n,int x){
   if(a[0]==x){
    return 0;
   }

   int i=1;
   while(i<n && a[i]<=x){
    i=i*2;
   }

   return binary_search(a,i/2,min(i,n-1),x);
}


int main(){
    int a[]={1,7,3,4,5};
    int n= sizeof(a)/sizeof(int);
    sort(a,a+n);
    cout<<"Enter number to find : ";
    int x;
    cin>>x;
    int res =exponential_search(a,n,x);
    cout<<"Found at : "<<res;
    
}