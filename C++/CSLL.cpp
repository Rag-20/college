#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next; 
    Node(int data1,Node* next1){
        data=data1;
        next=next1;
    }
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
    temp->next=head;///*** */
    return head;
}

Node* insertAtBeg(Node* head){
    Node*temp=head;
    int data;
    cout<<"Enter data at beggining : ";
    cin>>data;
    while(temp->next!=head){        ///*** */
        temp=temp->next;
    }
    head= new Node(data,temp->next);//
    temp->next=head;
    return head;
}

Node* insert(Node* head,int k){
    Node*temp=head;
    int data;
    cout<<"Enter data to insert at "<<k<<" : ";
    cin>>data;
    if(k==1){
        head=insertAtBeg(head);
        return head;
    }

    int count=0;
    while(temp->next!=head){
        count++;
        if(count==k-1){
            temp->next=new Node(data,temp->next);
            return head;
        }
        temp=temp->next;
    }
    count++;
    if(count==k-1){     ///*** */
        temp->next=new Node(data,head);
    }
return head;
}

Node* deleteAtPos(Node* head,int k){
    Node*temp=head;

    if(k==1){
        head=temp->next;
        Node*temp1=head;        ///*** */
        while(temp1->next!=temp){   ///*** */
            temp1=temp1->next;
        }
        temp1->next=head;
        free(temp);
        return head;
    }
    int count=0;
    while(temp->next!=head){
        count++;
        if(count==k-1){
            temp->next=temp->next->next;
            return head;
        }
        temp=temp->next;
    }
return head;
}

void print(Node* head){
    Node* temp=head;
    while(temp->next!=head){        ///*** */
        cout<<temp->data<<"->";
        temp=temp->next;
    }cout<<temp->data<<"->";
}

int main(){
    int n;
    cout<<"How many nodes do you want to create? : ";
    cin>>n;
    Node* head=createList(n);
    int i;
    while(true){
        cout<<"\n\n1 for insert at beggining\n2 for insert\n3 for delete\n4 for display\n5 for exit\n\n";
        cout<<"What do you want to perform?(Enter number) : ";
        cin>>i;
        switch(i){
            case 1:{
                head=insertAtBeg(head);
                break;
            }
            case 2:{
                int k;
                cout<<"Enter position to insert : ";
                cin>>k;
                head=insert(head,k);
                break;
            }
            case 3:{
                int k;
                cout<<"Enter position to delete : ";
                cin>>k;
                head=deleteAtPos(head,k);
                break;
            }
            case 4:{
                print(head);
                break;
            }
            case 5:{
                exit(0);
                break;
            }
            default:{
                cout<<"Wrong Choice, try again!! \n";
                break;
            }
        }
    }
    return 0;
}