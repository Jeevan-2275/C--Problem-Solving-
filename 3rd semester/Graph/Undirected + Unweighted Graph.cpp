#include <iostream>
#include <vector>
using namespace std;

int main() {
    int V = 4; 
    vector<int> graph[4];

    auto addEdge = [&](int u, int v){
        graph[u].push_back(v);
        graph[v].push_back(u);
    };

    addEdge(0,1); 
    addEdge(0,2); 
    addEdge(1,2); 
    addEdge(2,3); 

    char vertices[] = {'A','B','C','D'};
    for(int i=0;i<V;i++){
        cout<<vertices[i]<<": ";
        for(auto v: graph[i])
            cout<<"-> "<<vertices[v]<<" ";
        cout<<endl;
    }
    return 0;
}
