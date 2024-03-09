#include <bits/stdc++.h>
// #include "my.h"
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

using ll = long long;
// using ull = unsigned long long;
// long long INF = 1000000000000000000;
// long long INF = 20;

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
  }

  for (int i = 0; i < N; i++)
  {
    if (A[i] != -1)
    {
      A[i]--;
    }
  }

  vector<int> d(N);
  for (int i = 0; i < N; i++)
  {
    if (A[i] != -1)
    {
      d[A[i]] = i;
    }
  }

  int now = -1;
  for (int i = 0; i < N; i++)
  {
    if (A[i] == -1)
    {
      now = i;
    }
  }

  vector<int> ans;
  ans.push_back(now);
  for (int i = 0; i < N - 1; i++)
  {
    now = d[now];
    ans.push_back(now);
  }
  for (auto itr : ans)
  {
    cout << itr + 1 << " ";
  }
  cout << endl;
  return 0;
}