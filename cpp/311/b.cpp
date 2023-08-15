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
  int N, D;
  cin >> N >> D;
  vector<string> S(N);
  for (int i = 0; i < N; i++)
  {
    cin >> S[i];
  }

  int max_len = 0;
  int len = 0;
  for (int i = 0; i < D; i++)
  {
    int free_count = 0;
    for (int j = 0; j < N; j++)
    {
      if (S[j][i] == 'o')
      {
        free_count++;
      }
    }
    if (free_count == N)
    {
      len++;
    }
    else
    {
      len = 0;
    }
    if (len > max_len)
    {
      max_len = len;
    }
  }
  cout << max_len << endl;
  return 0;
}