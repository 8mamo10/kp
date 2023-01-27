#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  vector<vector<int>> vec(n);
  for (int i = 0; i < m; i++)
  {
    int u, v;
    cin >> u >> v;
    vec[u - 1].push_back(v - 1);
    vec[v - 1].push_back(u - 1);
  }

  int ans = 0;
  vector<bool> visited(n);
  queue<int> q;
  for (int i = 0; i < n; i++)
  {
    if (visited[i])
    {
      continue;
    }
    ans++;
    visited[i] = true;
    q.push(i);
    while (!q.empty())
    {
      int c = q.front();
      q.pop();
      for (auto d : vec[c])
      {
        if (visited[d])
        {
          continue;
        }
        visited[d] = true;
        q.push(d);
      }
    }
  }
  cout << ans << endl;
  return 0;
}