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
  int n;
  cin >> n;
  string s;
  cin >> s;
  int q;
  cin >> q;
  vector<int> t(q);
  vector<int> x(q);
  vector<char> c(q);

  int last_index = 0;
  int last_change = 0;
  for (int i = 0; i < q; i++)
  {
    cin >> t[i] >> x[i] >> c[i];
    if (t[i] == 2 || t[i] == 3)
    {
      last_index = i;
      last_change = t[i];
    }
  }

  for (int i = 0; i < q; i++)
  {
    if (i == last_index)
    {
      if (last_change == 2)
      {
        for (auto &itr : s)
        {
          itr = tolower(itr);
        }
      }
      else if (last_change == 3)
      {
        for (auto &itr : s)
        {
          itr = toupper(itr);
        }
      }
      continue;
    }
    if (t[i] == 1)
    {
      s[x[i] - 1] = c[i];
    }
    // cout << i << ":" << s << endl;
  }
  cout << s << endl;
  return 0;
}