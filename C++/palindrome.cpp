#include <bits/stdc++.h>
using namespace std;

int main(){
    
    string s;
    getline(cin,s);
    int n=s.length();
    stack<char> st;
    for(int i=0;i<n;i++){
        st.push(s[i]);
    }
    bool flag;
    for(int i=0;i<=n/2;i++){
        if(st.top()==s[i]){
            flag=true;
        }
        else {flag= false;break;}
        st.pop();
    }

    if(flag)
    cout<<"String is palindrome"<<endl;
    else
     cout<<"String is not palindrome"<<endl;
    return 0;
}