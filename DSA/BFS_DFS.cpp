#include <iostream>
#include <vector>
#include <queue>
using namespace std;
void addEdge(vector<int> a[], int u, int v)
{
    a[u].push_back(v);
    a[v].push_back(u);
}
void DFS(vector<int> a[], int u, bool visited[])
{
    visited[u] = true;
    cout << u << " ";
    for (int i = 0; i < a[u].size(); i++)
    {
        if (visited[a[u][i]] == false)
        {
            DFS(a, a[u][i], visited);
        }
    }
}
void DFSUtil(vector<int> a[], int v)
{
    bool visited[v];
    for (int i = 0; i < v; i++)
    {
        visited[i] = false;
    }
    for (int i = 0; i < v; i++)
    {
        if (visited[i] == false)
        {
            DFS(a, i, visited);
        }
    }
}
void BFS(vector<int> a[], int u, bool visited[])
{
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while (!q.empty())
    {
        int temp = q.front();
        q.pop();
        cout << temp << " ";
        for (int i = 0; i < a[temp].size(); i++)
        {
            if (visited[a[temp][i]] == false)
            {
                q.push(a[temp][i]);
                visited[a[temp][i]] = true;
            }
        }
    }
}
void BFSUtil(vector<int> a[], int v)
{
    bool visited[v];
    for (int i = 0; i < v; i++)
    {
        visited[i] = false;
    }
    for (int i = 0; i < v; i++)
    {
        if (visited[i] == false)
        {
            BFS(a, i, visited);
        }
    }
}
int main()
{
    cout << "Aviraj Kumar \nUID:- 21BCS10973 \n\n";

    int length;
    cout << "Enter the number of vertices: ";
    cin >> length;
    vector<int> adj[length];
    for (int iterator = 0; iterator < length; iterator++)
    {
        int u, v;
        cout << "Enter the vertices: ";
        cin >> u >> v;
        addEdge(adj, u, v);
    }
    cout<<"DFS Traversal "<<endl;
    DFSUtil(adj, length);
    cout<<"\nBFS Traversal "<<endl;
    BFSUtil(adj, 5);

    return 0;
}
