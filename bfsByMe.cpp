#include <iostream>
#include <vector>
#include <queue>

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

    void addEdge(int u, int v)
    {
        adj[v].push_back(u);
        adj[u].push_back(v);
    }

    void BFS(int s)
    {
        int source = s;
        bool visited[V] = {false};
        queue<int> q;

        q.push(s);
        visited[s] = true;
        while (!q.empty())
        {
            int sourceForThisIteration = q.front();
            cout << sourceForThisIteration << " ";
            q.pop();

            for (auto it : adj[sourceForThisIteration])
            {
                if (!visited[it])
                {
                    visited[it] = true;
                    q.push(it);
                }
            }
        }
        cout << endl;
    }
};

int main()
{
    Graph GraphObj(4);

    GraphObj.addEdge(0, 1);
    GraphObj.addEdge(0, 2);
    GraphObj.addEdge(1, 2);
    GraphObj.addEdge(2, 3);
    GraphObj.addEdge(3, 3);

    GraphObj.BFS(2);
}
