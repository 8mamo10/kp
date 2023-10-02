#include <bits/stdc++.h>
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

// using ll = long long;
// using ull = unsigned long long;
// long long INF = 1000000000000000000;

bool is_kaibun(string s)
{
  int n = s.size();
  for (int i = 0; i < n; i++)
  {
    if (s[i] != s[n - i - 1])
    {
      return false;
    }
  }
  return true;
}

int main()
{
  string s;
  cin >> s;
  int n = s.size();
  int ans = 1;
  // start
  for (int i = 0; i < n; i++)
  {
    // length
    for (int j = i + 1; j <= n; j++)
    {
      string t = "";
      for (int k = i; k < j; k++)
      {
        t += s[k];
      }
      if (is_kaibun(t))
      {
        ans = max(ans, j - i);
      }
    }
  }
  cout << ans << endl;
  return 0;
}