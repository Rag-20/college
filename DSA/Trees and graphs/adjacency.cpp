// C++ Program to Implement Adjacency Matrix
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int V;
    cout<<"Enter number of vertices :";
    cin>>V;
    int adjMatrix[V][V];

    // Initialize the adjacency matrix
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            adjMatrix[i][j] = 0;
        }
    }

    char c;
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if(i!=j){
            cout<<"Is there an edge between v"<<i+1<<" and v"<<j+1<<"(Y/N) : ";
            cin>>c;
            }
            if(c=='Y'||c=='y'){
                adjMatrix[i][j] = 1;
            }
            
        }
    }


    cout << "Adjacency Matrix:" << endl;
    // Print the adjacency matrix
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }

    cout<<"vertex  IN  OUT"<<endl;
    for (int i = 0; i < V; i++) {
        int sumout=0;
        int sumin=0;
        for (int j = 0; j < V; j++) {
            if(adjMatrix[i][j]!=0)
            sumout+=1;

            if(adjMatrix[j][i]!=0)
            sumin+=1;
        }
        cout<<"v"<<i+1<<"\t"<<sumin<<"   "<<sumout<<endl;
        cout << endl;
    }

    vector<vector<int>> li(V);
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++) {
            if(adjMatrix[i][j]!=0)
            li[i].push_back(j);
        }
    }

    cout<<"Adjacency list is :-"<<endl;
    for(int i=0;i<V;i++){
        cout<<"v"<<i+1<<" ->";
        for(int j=0;j<li[i].size();j++){
            cout<<li[i][j]+1;
        }
        cout<<endl;
    }
    return 0;
}