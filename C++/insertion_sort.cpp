#include<bits/stdc++.h>
using namespace std;
static int step;
void insertion_sort(int a[],int n){
    for(int i=1;i<n;i++){
        step++;
        int key=a[i];
        int j=i-1;
        
        while(j>=0 && a[j]<key){
                a[j+1]=a[j];
                j--;
                step+=2;
        }
        a[j+1]=key;
    }step++;
}


int main(){
    int a[]={1,2,3,4,5};
    int n= sizeof(a)/sizeof(int);
    insertion_sort(a,n);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n"<<step;
}