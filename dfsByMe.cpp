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
        cout << v;
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

    void addEdg(int v, int u)
    {
        adj[v].push_back(u);
        adj[u].push_back(v);
    }
};