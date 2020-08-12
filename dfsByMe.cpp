#include <iostream>
#include <vector>
#include <list>

using namespace std;

class Graph
{
    int V;
    vector<int> *adj;
    void dfsInternal(int v, bool visited[])
    {
        cout << v << " ";
        visited[v] = true;

        for (auto &it : adj[v])
        {
            if (!visited[it])
            {
                dfsInternal(it, visited);
            }
        }
    }

public:
    Graph(int V)
    {
        this->V = V;
        adj = new vector<int>[V];
    }

    void addEdge(int v, int u)
    {
        adj[v].push_back(u);
        adj[u].push_back(v);
    }

    void DFS(int v)
    {
        bool *visited = new bool[v];
        for (int i = 0; i < V; i++)
        {
            visited[i] = false;
        }

        dfsInternal(v, visited);
    }
};

int main()
{
    // Create a graph given in the above diagram
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    cout << "Following is Depth First Traversal"
            " (starting from vertex 2) \n";
    g.DFS(2);

    return 0;
}