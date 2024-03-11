#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

class Graph
{
    int V;
    vector<pair<int, int>> *adj;

public:
    Graph(int v)
    {
        V = v;
        adj = new vector<pair<int, int>>[V];
    }

    void addEdge(int u, int v, int w)
    {
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }

    int primMST()
    {
        int cost = 0;

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        vector<int> key(V, INT_MAX);
        vector<int> parent(V, -1);
        vector<bool> inMST(V, false);

        pq.push({0, 0});
        key[0] = 0;

        while (!pq.empty())
        {
            int u = pq.top().second;
            pq.pop();

            inMST[u] = true;

            for (auto &neighbor : adj[u])
            {
                int v = neighbor.first;
                int weight = neighbor.second;

                if (!inMST[v] && key[v] > weight)
                {
                    key[v] = weight;
                    pq.push({key[v], v});
                    parent[v] = u;
                }
            }
        }

        for (int i = 1; i < V; i++)
        {
            cost += key[i];
        }

        return cost;
    }
};

int main()
{
    int n, m;
    cin >> n >> m;
    Graph g(n);
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        g.addEdge(u, v, w);
    }

    cout << g.primMST() << endl;

    return 0;
}
