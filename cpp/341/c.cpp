#include <bits/stdc++.h>
// #include "my.h"
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

// using ll = long long;
// using ull = unsigned long long;
// long long INF = 1000000000000000000;

#define RIKU '.'
#define UMI '#'

int main()
{
  int h, w, n;
  cin >> h >> w >> n;
  string t;
  cin >> t;
  vector<string> s(h);
  for (int i = 0; i < h; i++)
  {
    cin >> s[i];
  }

  set<pair<int, int>> st;
  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w; j++)
    {
      int y = i;
      int x = j;
      bool ok = true;
      if (s[y][x] == UMI)
      {
        ok = false;
        continue;
      }
      for (int k = 0; k < n; k++)
      {
        char c = t[k];
        if (c == 'L')
        {
          x -= 1;
        }
        else if (c == 'R')
        {
          x += 1;
        }
        else if (c == 'U')
        {
          y -= 1;
        }
        else if (c == 'D')
        {
          y += 1;
        }
        if (s[y][x] == UMI)
        {
          ok = false;
          break;
        }
      }
      if (ok)
      {
        st.insert({x, y});
      }
    }
  }
  cout << st.size() << endl;
  return 0;
}