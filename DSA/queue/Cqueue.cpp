#include <iostream>
using namespace std;



class Cqueue{
int front = -1, rear = -1, n;
int cqueue[100];
public:
Cqueue(int n1){
    n=n1;
}
void enqueueCQ(int val) {
    if((rear+1)%n==front)  // condition to check queue is full  
    {  
        printf("Queue is overflow..");  
    }  
    else if(front==-1 && rear==-1)   // condition to check queue is empty  
    {  
        front=0;  
        rear=0;  
        cqueue[rear]=val;  
    }  
    else  
    {  
        rear=(rear+1)%n;       // rear is incremented  
        cqueue[rear]=val;     // assigning a value to the queue at the rear position.  
    }  
}
void dequeueCQ() {
   if(front==-1 && rear==-1)  // condition to check queue is empty  
    {  
        printf("\nQueue is underflow..");  
    }  
    else if(front==rear)  
    {  
        cout<<"\nThe dequeued element is "<< cqueue[front];  
        front=-1;  
        rear=-1;  
    }   
    else  
    {  
        cout<<"\nThe dequeued element is "<<cqueue[front];  
        front=(front+1)%n;  
    }  
}
void displayCQ() {
    if (front == -1)
    {
        printf("\nQueue is Empty");
        return;
    }
    cout<<"\nElements in Circular Queue are: ";
    if (rear >= front)
    {
        for (int i = front; i <= rear; i++)
           cout<<cqueue[i];
    }
    else
    {
        for (int i = front; i < n; i++)
            cout<< cqueue[i];
 
        for (int i = 0; i <= rear; i++)
            cout<<cqueue[i];
    }
}
};
int main() {
    Cqueue cq=Cqueue(5);
   int ch, val;
   cout<<"1)Insert\n";
   cout<<"2)Delete\n";
   cout<<"3)Display\n";
   cout<<"4)Exit\n";
   do {
      cout<<"Enter choice : "<<endl;
      cin>>ch;
      switch(ch) {
         case 1:
         cout<<"Input for insertion: "<<endl;
         cin>>val;
         cq.enqueueCQ(val);
         break;

         case 2:
         cq.dequeueCQ();
         break;

         case 3:
         cq.displayCQ();
         break;

         case 4:
         cout<<"Exit\n";
         break;
         default: cout<<"Incorrect!\n";
      }
   } while(ch != 4);
   return 0;
}