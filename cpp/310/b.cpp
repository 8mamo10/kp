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
  int N, M;
  cin >> N >> M;
  vector<int> P(N);
  vector<int> C(N);
  vector<vector<int>> F(N);
  for (int i = 0; i < N; i++)
  {
    cin >> P[i] >> C[i];
    for (int j = 0; j < C[i]; j++)
    {
      int fc;
      cin >> fc;
      F[i].push_back(fc);
    }
  }

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      if (i == j)
      {
        continue;
      }
      if (P[i] < P[j])
      {
        continue;
      }
      vector<int> fun_i = F[i];
      vector<int> fun_j = F[j];

      bool ret = true;
      for (int k = 0; k < C[i]; k++)
      {
        if (find(fun_j.begin(), fun_j.end(), fun_i[k]) == fun_j.end())
        {
          ret = false;
          break;
        }
      }
      if (!ret)
      {
        continue;
      }

      if (P[i] > P[j])
      {
        cout << "Yes" << endl;
        return 0;
      }
      for (int l = 0; l < C[j]; l++)
      {
        if (find(fun_i.begin(), fun_i.end(), fun_j[l]) == fun_i.end())
        {
          // cout << i << ":" << j << endl;
          cout << "Yes" << endl;
          return 0;
        }
      }
    }
  }
  cout << "No" << endl;
  return 0;
}