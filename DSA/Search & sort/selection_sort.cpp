#include<bits/stdc++.h>
using namespace std;
static int step;
void selection_sort(int a[], int n){
    for(int i=0;i<n;i++){
        int min=i;
        for (int j = i+1; j<n; j++)
        {
            if(a[j]<a[min]){
                min=j;
            }
            step++;
        }step++;
        if(min!=i){
        swap(a[i],a[min]);
        }
    step++;
    }step++;
}

int main(){
    int a[]={1,2,3,4,5};
    int n= sizeof(a)/sizeof(int);
    selection_sort(a,n);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n"<<step;
}