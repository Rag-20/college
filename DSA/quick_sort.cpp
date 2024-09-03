#include<bits/stdc++.h>
using namespace std;
static int step;
int partition(int a[],int s,int e){
    int piv=a[e];
    int j=s-1;
    for(int i=s;i<e;i++){
        if(a[i]>piv){
            j++;
            swap(a[i],a[j]);
        }
        step++;
    }step++;
    j++;
    swap(a[j],a[e]);

    return j;
}

void quick_sort(int a[],int s, int e){
        if(s<e){
            int pi = partition(a,s,e);
            quick_sort(a,s,pi-1);
            quick_sort(a,pi+1,e);
        }
}

int main(){
    int a[]={1,2,3,4,5,6,7,8,9};
    int n= sizeof(a)/sizeof(int);
    quick_sort(a,0,n-1);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n"<<step;
}