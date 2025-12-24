#include <bits/stdc++.h>
using namespace std;

int main()
{

    int V, E;
    cin >> E >> V;

    vector<vector<int>> adj(V);

    for (int i = 0; i < V; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 0; i < V; i++)
    {
        cout << i << "->";
        for (auto x : adj[i])
        {
            cout << x;
        }
    }
    return 0;
}