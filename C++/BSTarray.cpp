// C++ implementation of tree using array
// numbering starting from 0 to n-1.
#include<bits/stdc++.h>
using namespace std;
int tree[10]={0};


void insert(int key){
    if (tree[0]==0) { // If the tree is empty, return a
                           // new node
        tree[0]=key;
        return;
    }
    int i=0;
    while(true){
        if (tree[i]==0) { 
        tree[i]=key;
        return;
        }
        if (key < tree[i]) {
        i=2*i+1;
        }
        else if (key > tree[i]) {
            i=i*2+2;
        }
    }
    
}

int searchNode(int key)
{
    // Base Cases: root is null or key is present at root
    if (tree[0] == 0) {
        return 0;
    }else if (tree[0] == key) {
        return 1;
    }
    // Key is greater than root's key
    int i=0;
    while(true){
        if(i<10){
            if(tree[i]==key){
            return 1;
        }
        }else return 0;
        

        if (tree[i] > key) {
        i=i*2+1;
        }
        else if (tree[i] < key) {
        i=i*2+2;
        }
    }
    
}

void preorderTraversal(int i)
{
    if (tree[i] != 0) {
        cout << tree[i] << " ";
        preorderTraversal(i*2+1);
        preorderTraversal(i*2+2);
    }
}
void inorderTraversal(int i)
{
    if (tree[i] != 0) {
        inorderTraversal(i*2+1);
        cout << tree[i] << " ";
        inorderTraversal(i*2+2);
    }
}
void postorderTraversal(int i)
{
    if (tree[i] != 0) {
        postorderTraversal(i*2+1);
        postorderTraversal(i*2+2);
        cout << tree[i] << " ";
    }
}

int print_tree() {
cout << "\n";
for (int i = 0; i < 10; i++) {
	if (tree[i] != 0)
	cout << tree[i];
	else
	cout << "-";
}
return 0;
}

// Driver Code
int main() {
insert(3);
insert(2);
insert(1);

insert(4);
print_tree();
preorderTraversal(0);
inorderTraversal(0);
postorderTraversal(0);
// int x=searchNode(4);
// if(x==1) cout<<"FOUN!!!";
// else cout<<"NOt found";
return 0;
}
