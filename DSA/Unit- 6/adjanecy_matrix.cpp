#include <bits/stdc++.h>
using namespace std;

int main()
{

    int V, E;
    cout << "Enter the vertices and edges:";
    cin >> V >> E;

    vector<vector<int>> adjMatrix(V, vector<int>(V, 0));

    for (int i = 0; i < E; i++)
    {

        int u, v;
        cout << "Enter the 2D Martix:";
        cin >> u >> v;
        adjMatrix[u][v] = 1;
        adjMatrix[u][v] = 1; // undirected
    }

    // printing martix:
    for (int i = 0; i < V; i++)
    {
        for (int j = 0; j < V; j++)
        {
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}