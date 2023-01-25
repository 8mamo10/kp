#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<vector<int>> vec;
vector<bool> visited;

void dfs(int i)
{
  visited[i] = true;
  for (auto j : vec[i])
  {
    if (visited[j])
    {
      continue;
    }
    dfs(j);
  }
}

int main()
{
  cin >> n >> m;
  vec.resize(n);
  visited.resize(n);

  for (int i = 0; i < m; i++)
  {
    int u, v;
    cin >> u >> v;
    vec[u - 1].push_back(v - 1);
    vec[v - 1].push_back(u - 1);
  }
  int ans = 0;
  for (int i = 0; i < n; i++)
  {
    if (!visited[i])
    {
      ans++;
      dfs(i);
    }
  }
  cout << ans << endl;
  return 0;
}