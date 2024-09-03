#include<bits/stdc++.h>
using namespace std;
static int step;
void bubble_sort(int a[],int n){
    bool swapped=false;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]<a[i]){
                swap(a[j],a[i]);
                swapped=true;
                step++;
            }
            step++;
        }
        if(swapped==false){
            break;
        }
       
        step++;
    }
}

int main(){
    int a[]={5,4,3,2,1};
    int n= sizeof(a)/sizeof(int);
    bubble_sort(a,n);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n"<<step;
}