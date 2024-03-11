#include <iostream>
#include <vector>
using namespace std;

class Demo
{
private:
    int V;
    vector<vector<int>> adj;

public:
    Demo(int v) : V(v), adj(v) {}

    void addEdge(int v, int w)
    {
        adj[v].push_back(w);
        adj[w].push_back(v);
    }
    void printVertices()
    {
        cout << "Vertices of the graph: ";
        for (int i = 0; i < V; ++i)
        {
            cout << i << " ";
        }
        cout << endl;
    }
};

int main()
{
    Demo graph(5);

    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2, 4);
    graph.printVertices();
    return 0;
}
