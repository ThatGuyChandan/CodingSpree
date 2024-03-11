#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Graph
{
    int V;
    vector<int> *adj;

public:
    Graph(int V)
    {
        this->V = V;
        adj = new vector<int>[V];
    }

    void addEdge(int v, int w)
    {
        adj[v].push_back(w);
        adj[w].push_back(v);
    }

    void DFSUtil(int v, bool visited[])
    {
        visited[v] = true;
        cout << v << " ";

        for (auto i = adj[v].begin(); i != adj[v].end(); ++i)
        {
            if (!visited[*i])
                DFSUtil(*i, visited);
        }
    }

    void DFS(int v)
    {
        bool *visited = new bool[V];
        for (int i = 0; i < V; i++)
            visited[i] = false;
        DFSUtil(v, visited);
        delete[] visited;
    }
};

int main()
{
    int n, m;
    cin >> n >> m;

    Graph g(n);
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v);
    }
    g.DFS(0);

    return 0;
}