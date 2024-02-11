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
  int N, Q;
  cin >> N >> Q;
  deque<pair<int, int>> dragon;
  for (int i = 0; i < N; i++)
  {
    dragon.push_back({i + 1, 0});
  }
  for (int i = 0; i < Q; i++)
  {
    int t;
    cin >> t;
    if (t == 1)
    {
      char c;
      cin >> c;
      auto [x, y] = dragon[0];
      if (c == 'R')
      {
        dragon.push_front({x + 1, y});
      }
      else if (c == 'L')
      {
        dragon.push_front({x - 1, y});
      }
      else if (c == 'U')
      {
        dragon.push_front({x, y + 1});
      }
      else if (c == 'D')
      {
        dragon.push_front({x, y - 1});
      }
      dragon.pop_back();
    }
    else if (t == 2)
    {
      int p;
      cin >> p;
      cout << dragon[p - 1].first << " " << dragon[p - 1].second << endl;
    }
  }
  return 0;
}