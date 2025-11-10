#include <iostream>
#include <vector>
using namespace std;

struct Edge {
    char dest;
    int weight;
};

int main() {
    int V = 4; // A, B, C, D
    vector<Edge> graph[4];

    // A->B(5), A->C(2)
    graph[0].push_back({'B', 5});
    graph[0].push_back({'C', 2});

    // B->C(3)
    graph[1].push_back({'C', 3});

    // C->D(1)
    graph[2].push_back({'D', 1});

    // Print graph
    char vertices[] = {'A','B','C','D'};
    for(int i=0;i<V;i++){
        cout<<vertices[i]<<": ";
        for(auto e: graph[i])
            cout<<"-> "<<e.dest<<"(w="<<e.weight<<") ";
        cout<<endl;
    }
    return 0;
}
