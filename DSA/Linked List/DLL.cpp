#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next; 
    Node* back;
    Node(int data1,Node* next1,Node* back1){
        data=data1;
        next=next1;
        back=back1;
    }
    Node(int data1){
        data=data1;
        next=nullptr;
        back=nullptr;
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
        temp->next=new Node(data,nullptr,temp);     /////** */
        temp=temp->next;
    }
    return head;
}

Node* insertAtBeg(Node* head){
    Node*temp=head;
    int data;
    cout<<"Enter data at beggining : ";
    cin>>data;
    head= new Node(data,temp,nullptr);      /////** */
    temp->back=head;
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
    while(temp!=NULL){
        count++;
        if(count==k-1){
        
            temp->next=new Node(data,temp->next,temp);      /////** */
            temp=temp->next;
            temp->next->back=temp;          /////** */
            return head;
        }
        temp=temp->next;
    }
return head;
}

Node* deleteAtPos(Node* head,int k){
    Node*temp=head;

    if(k==1){
        head=temp->next;
        head->back=NULL;
        free(temp);
        return head;
    }
    int count=0;
    while(temp!=NULL){
        count++;
        if(count==k-1&&temp->next->next==nullptr){          /////** */
            temp->next=temp->next->next;
        }
        else if(count==k-1){
            temp->next=temp->next->next;
            temp->next->back=temp;              /////** */
            return head;
        }
        temp=temp->next;
    }
return head;
}

void print(Node* head){
    Node* temp=head;
    while(temp->next!=NULL){            /////** */
        cout<<temp->data<<"->";
        temp=temp->next;
    }cout<<temp->data<<"->"<<endl;

    
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->back;   
    }
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