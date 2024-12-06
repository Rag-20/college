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

int main(){
    int a[]={1,2,3,4,5};
    int n= sizeof(a)/sizeof(int);
    cout<<"Enter number to find : ";
    int x;
    cin>>x;
    int res =binary_search(a,0,n-1,x);
    cout<<"Found at : "<<res;
    
}