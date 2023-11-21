#include <bits/stdc++.h>
// #include "my.h"
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
  vector<int> D(N);
  for (int i = 0; i < N; i++)
  {
    cin >> D[i];
  }

  int ans = 0;
  for (int i = 0; i < N; i++)
  {
    string month = to_string(i + 1);
    int days = D[i];
    for (int j = 1; j <= days; j++)
    {
      string day = to_string(j);
      string date = month + day;
      if (size(set<char>(date.begin(), date.end())) == 1)
      {
        ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}