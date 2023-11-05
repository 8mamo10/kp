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
  vector<int> W(N);
  vector<int> X(N);
  for (int i = 0; i < N; i++)
  {
    cin >> W[i] >> X[i];
  }

  int ans = 0;
  for (int i = 0; i < 24; i++)
  {
    int num = 0;
    for (int j = 0; j < N; j++)
    {
      int timezone = (i + X[j]) % 24;
      if (9 <= timezone && timezone < 18)
      {
        num += W[j];
      }
    }
    // cout << i << ":" << num << endl;
    ans = max(ans, num);
  }
  cout << ans << endl;
  return 0;
}