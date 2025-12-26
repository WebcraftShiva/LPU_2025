#include <bits/stdc++.h>
using namespace std;

void DFS(int node, vector<vector<int>> &adj, vector<bool> &visited)
{

    visited[node] = true;
    cout << node << " ";

    for (int neighbour : adj[node])
    {
        if (!visited[neighbour])
        {
            DFS(neighbour, adj, visited);
        }
    }
}

int main()
{

    int V, E;
    cin >> V >> E;

    vector<vector<int>> adj(V);
    vector<bool> visited(V, false);

    for (int i = 0; i < E; i++)
    {

        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); // undirected graph
    }

    for (int i = 0; i < V; i++)
    {
        if (!visited[i])
        {
            DFS(i, adj, visited);
        }
    }
    return 0;
}