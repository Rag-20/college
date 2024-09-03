#include<bits/stdc++.h>
using namespace std;

int jump_search(int a[],int n,int x){
    int jump=sqrt(n);
    int k=0;

    while(a[min(jump,n)-1]<x){
        k=jump;
        jump+=sqrt(n);

        if(k>=n){return -1;}
    }

    while(a[k]<x){
        k++;
        if(k==min(jump,n)){return -1;}
    }
    
    if(a[k]==x) return k;

    return -1;
}

int main(){
    int a[]={1,2,3,4,5};
    int n= sizeof(a)/sizeof(int);
    cout<<"Enter number to find : ";
    int x;
    cin>>x;
    int res =jump_search(a,n,x);
    cout<<"Found at : "<<res;
    
}