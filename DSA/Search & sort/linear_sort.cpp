#include<bits/stdc++.h>
using namespace std;

int main(){
    string a[5];
    for(int i=0;i<5;i++){
        cin>>a[i];
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = i+1; j < 5; j++)
        {
            if(a[i]>a[j]){
                swap(a[i],a[j]);
            }
        }
        
    }

    for(int i=0;i<5;i++){
        cout<<a[i];
    }
}