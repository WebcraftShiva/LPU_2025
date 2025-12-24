#include <bits/stdc++.h>
using namespace std;

void BFS(int start, vector<vector<int>>&adj, int V)
{
    vector<bool> visted(V, false);

    queue<int> q;

    visted[start] = true;
    q.push(start);

    while (!q.empty())
    {
        int node = q.front();
        q.pop();

        cout << "node value: " << node << endl;

        for (int neighbour : adj[node])
        {
            if (!visted[neighbour])
            {
                visted[neighbour] = true;
                q.push(neighbour);
            }
        }
    }
}

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
        adj[v].push_back(u);
    }
    BFS(0, adj, V);
    return 0;
}