#include <bits/stdc++.h>
using namespace std;
const N = 1e5 + 10;
vector<int> g[N];
int depth[N], heigth[N];
void dfs(int vertex, int parent)
{
    for (int child : g[vertex])
    {
        if (child == parent)
            continue;
        depth[child] = heigth[vertex] + 1;
        dfs(child, vertex);
        heigth[vertex] = max(heigth[vertex], heigth[child] + 1);
    }
}
int main()
{  
     vector< int > g[N];
    int n;
    int depth[N], heigth[N];
    cin >> n; 
    for (int i = 1; i < n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    dfs(1, 0);
    for (int i = 1; i <= n; i++)
    {
        cout << depth[i] << " " << heigth[i] << endl;
    }
}