#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    char data;
    Node* next; 
    Node(char data1,Node* next1){
        data=data1;
        next=next1;
    }
    Node(char data1){
        data=data1;
        next=nullptr;
    }
};

Node* createList(string s){
    Node* head=new Node(s[0]);
    Node* temp=head;
    for(int i=1;i<s.length();i++){
        temp->next=new Node(s[i]);
        temp=temp->next;
    }
    return head;
}

Node* reverse(Node* head){
    Node* rev=head;
    Node* temp=head->next;
    int x=1;
    while(temp!=NULL){
        rev=new Node(temp->data,rev);
        if(x==1){
            rev->next->next=NULL;
            x++;
        }
        temp=temp->next;
    }
return rev;
}

void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    string s;
    cout<<"Enter string to be reverse : ";
    getline(cin,s);
    Node* head = createList(s);
    print(head);
    Node* rev=reverse(head);
    print(rev);
    return 0;
}