#include <bits/stdc++.h>
using namespace std;
class Node {
    public:
   int data;
   struct Node *next;
   Node(int data1){
    data=data1;
    next=NULL;
   }
};
Node* top = NULL;
void push(int val) {
   Node* newnode = new Node(val);
   newnode->next = top;
   top = newnode;
}
void pop() {
   if(top==NULL)
   cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< top->data <<endl;
      top = top->next;
   }
}
void display() {
   Node* temp;
   if(top==NULL)
   cout<<"stack is empty";
   else {
      temp = top;
      cout<<"Stack elements are: ";
      while (temp != NULL) {
         cout<< temp->data <<" ";
         temp = temp->next;
      }
   }
   cout<<endl;
}
int main() {
   int ch, val;

   do {
       cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=4);
   return 0;
}