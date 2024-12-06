#include <bits/stdc++.h>
using namespace std;

class Stack{
    int top=-1;
    int n;
    char stack[100];
public:
Stack(int n1){
    n=n1;
}

void push(char val) {
   if(top>=n-1)
   cout<<"Stack Overflow"<<endl;
   else {
      top++;
      stack[top]=val;
   }
}
char pop() {
    char c;
   if(top<=-1)
   cout<<"Stack Underflow"<<endl;
   else {
      c=stack[top];
      top--;
   }
   return c;
}
};

int main(){
    string s;
    getline(cin,s);
    int n=s.length();
    Stack st=Stack(n);

    for(int i=0;i<n;i++){
        st.push(s[i]);
    }

    string rev;
    for(int i=0;i<n;i++){
        rev+=st.pop();
    }

    cout<<"Reversed string : "<<rev<<endl;
    return 0;
}