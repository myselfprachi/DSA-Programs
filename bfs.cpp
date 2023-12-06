#include <bits/stdc++.h>
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

    void bfs(int s) {
        bool visited[V];
        for (int i = 0; i < V; i++) {
            visited[i] = false;
        }
        queue<int> q;
        visited[s] = true;
        q.push(s);
        while (q.empty() == false) {
            int u = q.front();
            q.pop();
            cout << u << " ";
            for (int v : adj[u]) {
                if (visited[v] == false) {
                    visited[v] = true;
                    q.push(v);
                }
            }
        }
    }
};

int main() {
    int vertices = 5;
    Graph g(vertices);

    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    g.bfs(0);
    return 0;
}
