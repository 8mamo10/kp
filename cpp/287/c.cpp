#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;
  vector<vector<int>> graph(N);
  for (int i = 0; i < M; i++)
  {
    int u, v;
    cin >> u >> v;
    u--;
    v--;
    graph[u].push_back(v);
    graph[v].push_back(u);
  }

  if (M != N - 1)
  {
    cout << "No" << endl;
    return 0;
  }
  for (int i = 0; i < N; i++)
  {
    if (graph[i].size() > 2)
    {
      cout << "No" << endl;
      return 0;
    }
  }
  vector<bool> reach(N);
  queue<int> q;
  reach[0] = true;
  q.push(0);
  while (!q.empty())
  {
    const int u = q.front();
    q.pop();
    for (const int v : graph[u])
    {
      if (!reach[v])
      {
        reach[v] = true;
        q.push(v);
      }
    }
  }
  for (int i = 0; i < N; i++)
  {
    if (!reach[i])
    {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}