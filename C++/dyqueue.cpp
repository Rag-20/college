// C++ program to implement the queue data structure using
// linked list
#include <bits/stdc++.h>
using namespace std;

// Node class representing a single node in the linked list
class Node {
public:
    int data;
    Node* next;
    Node(int new_data)
    {
        this->data = new_data;
        this->next = nullptr;
    }
};

// Class to implement queue operations using a linked list
class Queue {

    // Pointer to the front and the rear of the linked list
    Node *front, *rear;

public:
    // Constructor to initialize the front and rear
    Queue() { front = rear = nullptr; }

    // Function to add an element to the queue
    void enqueue(int data) {

        // Create a new linked list node
       Node* newNode = new Node(data);
        // If the queue is empty
        if (front== nullptr) {
            // Both front and rear point to the new node
            front = newNode;
            rear=newNode;
        }
        else {
            // Link the new node at the end of the queue
            rear->next = newNode;
            // Update rear to the new node
            rear = newNode;
        }
    }

    // Function to remove an element from the queue
    void dequeue() {
        // If queue is empty, return
        if (front == nullptr) {
            cout << "Queue Underflow\n";
            return;
        }
        // Store previous front and move front one node
        // ahead
        Node* temp = front;
        cout<<"Removed "<<temp->data<<endl;;
        front = front->next;
        // If front becomes nullptr, then change rear also
        // to nullptr
        if (front == nullptr)
            rear = nullptr;

        // Deallocate memory of the old front node
        delete temp;
    }

void display(){
   if(front==NULL)
   cout<<"queue is empty";
   else {
    Node*temp=front;
    cout<<"Queue is : ";
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
   }
}
};

// Driver code to test the queue implementation
int main()
{
    Queue q;
int ch, val;

   do {
       cout<<"\n1) Enqueue"<<endl;
   cout<<"2) Dequeue"<<endl;
   cout<<"3) Display queue"<<endl;
   cout<<"4) Exit"<<endl;
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            q.enqueue(val);
            break;
         }
         case 2: {
            q.dequeue();
            break;
         }
         case 3: {
            q.display();
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