#include<bits/stdc++.h>
using namespace std;

struct Graph {
    int V;
    vector<int> *adj;


    Graph(int v) {
        V = v;
        adj = new vector<int>[V];
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
     void printGraph() {
        for (int i = 0; i < V; i++) {
            cout << "Adjacency list of vertex " << i << ": ";
            for (int x : adj[i]) 
                cout << x << " ";
            cout << "\n";
        }
    }
};

int main() {
    // Example usage:
    int vertices = 5;
    Graph g(vertices);

    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 4);
    g.printGraph();

    // Continue with further operations or testing...
    return 0;
}
