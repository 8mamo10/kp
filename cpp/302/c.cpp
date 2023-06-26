#include <bits/stdc++.h>
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

// using ull = unsigned long long;

int main()
{
  int N, M;
  cin >> N >> M;
  vector<string> S(N);
  for (int i = 0; i < N; i++)
  {
    cin >> S[i];
  }

  sort(S.begin(), S.end());

  do
  {
    bool ok = true;
    for (int i = 0; i < N - 1; i++)
    {
      int count = 0;
      for (int j = 0; j < M; j++)
      {
        if (S[i][j] != S[i + 1][j])
        {
          count++;
        }
        if (count > 1)
        {
          ok = false;
        }
      }
    }
    if (ok)
    {
      cout << "Yes" << endl;
      return 0;
    }
  } while (next_permutation(S.begin(), S.end()));
  cout << "No" << endl;

  return 0;
}