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
  vector<pair<int, int>> dragon(N);
  for (int i = 0; i < N; i++)
  {
    dragon[i].first = i + 1;
    dragon[i].second = 0;
  }
  for (int i = 0; i < Q; i++)
  {
    int t;
    cin >> t;
    if (t == 1)
    {
      string c;
      cin >> c;
      for (int i = 0; i < N - 1; i++)
      {
        dragon[N - 1 - i] = dragon[N - 1 - i - 1];
      }
      if (c == "R")
      {
        dragon[0].first++;
      }
      else if (c == "L")
      {
        dragon[0].first--;
      }
      else if (c == "U")
      {
        dragon[0].second++;
      }
      else if (c == "D")
      {
        dragon[0].second--;
      }
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