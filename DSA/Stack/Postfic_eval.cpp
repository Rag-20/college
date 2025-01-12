#include <bits/stdc++.h>
using namespace std;
bool isOperand(char c) {
    if ((c>='a' && c<='z')||(c>='A' && c<='Z')) {
        return true;
    }
    return false;
}

int evaluatePostfix(string s)
{
	// Create a stack of capacity equal to expression size
	stack<int> st;

	for (int i = 0; i < s.length(); ++i) {
		
		// If the scanned character is an operand 
		// (number here), push it to the stack.
		if (isOperand(s[i])){
            int data;
            cout<<"Enter value of"<<s[i]<<" : ";
            cin>>data;
            st.push(data);
        }
        else if( s[i]>='0' && s[i]<='9'){
            st.push(s[i]-'0');
        }
		

		// If the scanned character is an operator, 
		// pop two elements from stack apply the operator
		else {
			int val1 = st.top();
			st.pop();
			int val2 = st.top();
			st.pop();
			switch (s[i]) {
			case '+':
				st.push(val2 + val1);
				break;
			case '-':
				st.push(val2 - val1);
				break;
			case '*':
				st.push(val2 * val1);
				break;
			case '/':
				st.push(val2 / val1);
				break;
			}
		}
	}
	return st.top();
}

// Driver code
int main()
{
	string exp = "KLAb+*+";

	// Function call
	cout << "postfix evaluation: " << evaluatePostfix(exp);
	return 0;
}
