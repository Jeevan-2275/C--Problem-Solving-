#include <iostream>
#include <vector>
using namespace std;

int main() {
    int V = 4; // A,B,C,D
    vector<int> graph[4];

    // Add directed edges
    auto addEdge = [&](int u,int v){ graph[u].push_back(v); };

    addEdge(0,1); // A->B
    addEdge(0,2); // A->C
    addEdge(1,2); // B->C
    addEdge(2,3); // C->D

    char vertices[] = {'A','B','C','D'};
    for(int i=0;i<V;i++){
        cout<<vertices[i]<<": ";
        for(auto v: graph[i])
            cout<<"-> "<<vertices[v]<<" ";
        cout<<endl;
    }
    return 0;
}
