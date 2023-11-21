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
    int month = i + 1;
    string s_month = to_string(month);
    int days = D[i];
    for (int day = 1; day <= days; day++)
    {
      string s_day = to_string(day);
      string s_all = s_month + s_day;
      char c = s_all[0];
      size_t count = 0;
      for (auto s : s_all)
      {
        if (c == s)
        {
          count++;
        }
      }
      if (s_all.length() == count)
      {
        ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}