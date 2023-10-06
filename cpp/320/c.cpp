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
  int m;
  cin >> m;
  vector<string> s(3);
  for (int i = 0; i < 3; i++)
  {
    cin >> s[i];
  }
  sort(s.begin(), s.end());

  // cout << s[0] << endl;
  // int p = s[0].find('1');
  // cout << p << endl;
  // p = s[0].find('8');
  // cout << p << endl;
  // p = s[0].find('8', 5);
  // cout << p << endl;
  // return -1;

  int ans = INT_MAX;
  do
  {
    for (int i = 0; i <= 9; i++)
    {
      int t = -1;
      for (auto itr : s)
      {
        t++;
        size_t pos = itr.find(to_string(i), t % m);
        if (pos != string::npos)
        {
          t += (pos - (t % m));
          continue;
        }
        t += (m - (t % m));
        pos = itr.find(to_string(i));
        if (pos != string::npos)
        {
          t += pos;
          continue;
        }
        t = INT_MAX;
        break;
      }
      ans = min(ans, t);
    }
  } while (next_permutation(s.begin(), s.end()));

  if (ans == INT_MAX)
  {
    cout << -1 << endl;
  }
  else
  {
    cout << ans << endl;
  }
  return 0;
}