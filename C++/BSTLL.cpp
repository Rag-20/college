#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data1,Node* l,Node* r){
        left=l;
        right=r;
        data=data1;
    }
    Node(int data1){
        data=data1;
        left=nullptr;
        right=nullptr;
    }
};

// Function to insert a node in the BST
Node* insertNode(Node* root, int data)
{
    if (root == nullptr) { // If the tree is empty, return a
                           // new node
        return new Node(data);
    }

    if (data < root->data) {
        root->left = insertNode(root->left, data);
    }
    else if (data > root->data) {
        root->right = insertNode(root->right, data);
    }
return root;
}

// Function to do inorder traversal of BST
void inorderTraversal(Node* root)
{
    if (root != nullptr) {
        inorderTraversal(root->left);
        cout << root->data << " ";
        inorderTraversal(root->right);
    }
}

void preorderTraversal(Node* root)
{
    if (root != nullptr) {
        cout << root->data << " ";
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}
void postorderTraversal(Node* root)
{
    if (root != nullptr) {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        cout << root->data << " ";
    }
}

// Function to search a given key in a given BST
Node* searchNode(Node* root, int key)
{
    // Base Cases: root is null or key is present at root
    if (root == nullptr || root->data == key) {
        return root;
    }
    // Key is greater than root's key
    if (root->data < key) {
        return searchNode(root->right, key);
    }
   // Key is smaller than root's key
    return searchNode(root->left, key);
}

// Function to find the inorder successor
Node* minValueNode(Node* node)
{
    Node* current = node;
    // loop down to find the leftmost leaf
    while (current && current->left != nullptr) {
        current = current->left;
    }
    return current;
}

// Function to delete a node
Node* deleteNode(Node* root, int data)
{
    if (root == nullptr)
        return root;

    if (data < root->data) {
        root->left = deleteNode(root->left, data);
    }
    else if (data > root->data) {
        root->right = deleteNode(root->right, data);
    }
    // if data is same as root's data, then This is the node
    // to be deleted
    else {
        // node with only one child or no child
        if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }

        // node with two children: Get the inorder successor
        // (smallest in the right subtree)
        Node* temp = minValueNode(root->right);

        // Copy the inorder successor's content to this node
        root->data = temp->data;

        // Delete the inorder successor
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

// Main function to demonstrate the operations of BST
int main()
{

    Node* root = nullptr;
    int val;
    int ch;
    // create a BST
    do {
       cout<<"1)Insert"<<endl;
   cout<<"2)in order"<<endl;
   cout<<"3)pre order"<<endl;
   cout<<"4)postorder"<<endl;
   cout<<"5)search"<<endl;
   cout<<"6)delete"<<endl;
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value to be inserted:";
            cin>>val;
            root=insertNode(root,val);
            break;
         }
         case 2: {
            inorderTraversal(root);
            break;
         }
         case 3: {
            preorderTraversal(root);
            break;
         }
         case 4: {
            postorderTraversal(root);
            break;
         }
         case 5: {
            cout<<"Enter value to be isearched : ";
            cin>>val;
            Node* found = searchNode(root, val);
            // check if the key is found or not
            if (found != nullptr) {
                cout << "Node "<<val<<" found in the BST." << endl;
            }
            else {
                cout << "Node "<<val<<" not found in the BST." << endl;
            }
            break;
         }
         case 6: {
            cout<<"Enter value to be deleteded:";
            cin>>val;
            root=deleteNode(root,val);
            break;
         }
         case 7: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=7);
    

    return 0;
}