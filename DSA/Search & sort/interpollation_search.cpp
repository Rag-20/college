#include<bits/stdc++.h>
using namespace std;

int interpolation_search(int a[],int l,int h,int x){
    int pos;

    if(l<=h && x>=a[l] && x<=a[h]){

        pos=l+(((double)(h-l)/(a[h]-a[l]))*(x-a[l]));

        if(a[pos]==x) return pos;

        if(a[pos]<x) return interpolation_search(a,pos+1,h,x);

        if(a[pos]>x) return interpolation_search(a,l,pos-1,x);
    }
    return -1;
}

int main(){
    int a[]={1,2,3,4,5};
    int n= sizeof(a)/sizeof(int);
    cout<<"Enter number to find : ";
    int x;
    cin>>x;
    int res =interpolation_search(a,0,n-1,x);
    cout<<"Found at : "<<res;
    
}