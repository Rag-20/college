#include<bits/stdc++.h>
using namespace std;
static int step;

void heap(int a[],int n,int i){
    int lar=i;
    int l=2*i+1;
    int r=2*i+2;

    if(l<n && a[l]<a[lar]){
        lar=l;
    }
    if(r<n && a[r]<a[lar]){
        lar=r;
    }

    if(lar!=i){
        swap(a[i],a[lar]);
        heap(a,n,lar);
    }
}

void heap_sort(int a[],int n){
    for(int i=n/2-1;i>=0;i--){
        heap(a,n,i);
        step++;
    }step++;

    for (int i = n-1; i > 0; i--)
    {
        swap(a[0],a[i]);
        heap(a,i,0);
        step++;
    }step++;
}

int main(){
    int a[]={1,2,3,4};
    int n= sizeof(a)/sizeof(int);
    heap_sort(a,n);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n"<<step;
}