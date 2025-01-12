#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next; 
    Node(int data1){
        data=data1;
        next=nullptr;
    }
};

Node* createList(int n){
    int data;
    cout<<"Enter data at head : ";
    cin>>data;
    Node* head=new Node(data);
    Node* temp=head;
    for(int i=2;i<=n;i++){
        cout<<"Enter data at node "<<i<<" : ";
        cin>>data;
        temp->next=new Node(data);
        temp=temp->next;
    }
    return head;
}

bool Check(Node* head, int value) {
    Node* temp = head;
    while (temp != nullptr) {
        if (temp ->data == value) {
            return true;
        }
        temp  = temp ->next;
    }
    return false;
}

Node* UnionLL(Node*head1,Node* head2){
    Node* uniHead=new Node(head1->data);
    Node* uniTemp=uniHead;
    Node* temp=head1->next;
    Node* temp2=head2;
    
    while(temp!=NULL){
        uniTemp->next=new Node(temp->data);
        temp=temp->next;
        uniTemp=uniTemp->next;
    }

    while(temp2!=NULL){
        if(!Check(head1,temp2->data)){
            uniTemp->next=new Node(temp2->data);
            uniTemp=uniTemp->next;
        }
        temp2=temp2->next;
    }
return uniHead;
}

Node* interLL(Node*head1,Node* head2){
    Node* temp=head1;
    Node* temp2=head2;
    Node* uniHead;
   Node* uniTemp;
    int x=1;
    while(temp2!=NULL){
        if(Check(head1,temp2->data)){
            if(x==1){
                uniHead=new Node(temp2->data);
                uniTemp =uniHead;
                x++;
                temp2=temp2->next;
                continue;
            }
            uniTemp->next=new Node(temp2->data);
            uniTemp=uniTemp->next;
        }
        temp2=temp2->next;
    }
    return uniHead;
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
    int m,n;
    cout<<"Enter size of first list : ";
    cin>>n;
    cout<<"Enter size of second list : ";
    cin>>m;

    Node* head1=createList(n);
    Node* head2=createList(m);
    Node* uni=UnionLL(head1,head2);
    Node *in=interLL(head1,head2);
    print(head1);
    print(head2);
    print(uni);
    print(in);

    return 0;
}