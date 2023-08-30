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
  vector<int> C(N);
  vector<vector<int>> A(N);
  for (int i = 0; i < N; i++)
  {
    cin >> C[i];
    for (int j = 0; j < C[i]; j++)
    {
      int bet;
      cin >> bet;
      A[i].push_back(bet);
    }
  }
  int X;
  cin >> X;

  vector<int> ans;
  int num = 37;
  for (int i = 0; i < N; i++)
  {
    if (find(A[i].begin(), A[i].end(), X) == A[i].end())
    {
      continue;
    }
    if (C[i] > num)
    {
      continue;
    }
    else if (C[i] < num)
    {
      ans.clear();
      num = C[i];
      ans.push_back(i);
    }
    else if (C[i] == num)
    {
      ans.push_back(i);
    }
  }
  cout << ans.size() << endl;
  for (auto itr : ans)
  {
    cout << itr + 1 << " ";
  }
  cout << endl;
  return 0;
}