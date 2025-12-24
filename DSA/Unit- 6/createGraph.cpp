#include <bits/stdc++.h>
using namespace std;

int main()
{

    int V, E;
    cin >> V >> E;

    vector<vector<int>> adj(V);

    for (int i = 0; i < E; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u); // undirected graph
    }

    for (int i = 0; i < V; i++)
    {
        cout << i << " -> ";

        for (int node : adj[i])
            cout << node;
    }

    return 0;
}