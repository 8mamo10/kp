#include <bits/stdc++.h>
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

// using ll = long long;
// long long INF = 1000000000000000000;

int main()
{
  int N, D;
  cin >> N >> D;
  vector<int> X(N), Y(N);
  for (int i = 0; i < N; i++)
  {
    cin >> X[i] >> Y[i];
  }

  vector<vector<bool>> graph(N, vector<bool>(N));
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      if ((X[i] - X[j]) * (X[i] - X[j]) + (Y[i] - Y[j]) * (Y[i] - Y[j]) <= D * D)
      {
        graph[i][j] = true;
      }
    }
  }
  vector<bool> ans(N);
  ans[0] = true;
  queue<int> que;
  que.push(0);
  while (!que.empty())
  {
    int q = que.front();
    que.pop();
    for (int i = 0; i < N; i++)
    {
      if (graph[q][i] && !ans[i])
      {
        que.push(i);
        ans[i] = true;
      }
    }
  }
  for (int i = 0; i < N; i++)
  {
    cout << (ans[i] ? "Yes" : "No") << endl;
  }
  return 0;
}