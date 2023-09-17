#include <bits/stdc++.h>
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

// using ll = long long;
// using ull = unsigned long long;
// long long INF = 1000000000000000000;

struct Edge
{
  int to, cost;
  Edge(int to = 0, int cost = 0) : to(to), cost(cost) {}
};

int main()
{
  int n, m;
  cin >> n >> m;
  vector<vector<Edge>> g(n);
  for (int i = 0; i < m; i++)
  {
    int a, b, c;
    cin >> a >> b >> c;
    --a;
    --b;
    g[a].emplace_back(b, c);
    g[b].emplace_back(a, c);
  }

  // if `&` here, all variables are available in lambda
  int ans = 0;
  auto f = [&](auto f, int v, vector<bool> visited, int dist) -> void
  {
    visited[v] = true;
    ans = max(ans, dist);
    for (auto e : g[v])
    {
      if (visited[e.to])
      {
        continue;
      }
      f(f, e.to, visited, dist + e.cost);
    }
  };

  for (int i = 0; i < n; i++)
  {
    f(f, i, vector<bool>(n), 0);
  }
  cout << ans << endl;
  return 0;
}
