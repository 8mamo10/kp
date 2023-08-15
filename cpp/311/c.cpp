#include <bits/stdc++.h>
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

// using ll = long long;
// using ull = unsigned long long;
// long long INF = 1000000000000000000;

int main()
{
  int N;
  cin >> N;
  vector<int> A(N + 1);
  for (int i = 1; i < N + 1; i++)
  {
    cin >> A[i];
  }

  for (int i = 1; i < N + 1; i++)
  {
    vector<int> path;
    queue<int> q;
    vector<bool> visited(N + 1, false);

    path.push_back(i);
    q.push(A[i]);
    visited[i] = true;

    while (!q.empty())
    {
      int next = q.front();
      q.pop();
      if (next == i)
      {
        for (auto itr : path)
        {
          cout << itr << " ";
        }
        cout << endl;
        return 0;
      }
      if (visited[next] == true)
      {
        break;
      }
      else
      {
        path.push_back(next);
        q.push(A[next]);
        visited[next] = true;
      }
    }
  }
  return 0;
}