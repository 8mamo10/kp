#include <bits/stdc++.h>
// #include "my.h"
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

// using ll = long long;
//   using ull = unsigned long long;
//   long long INF = 1000000000000000000;

int main()
{
  vector<int> v;
  while (true)
  {
    int a;
    cin >> a;
    v.push_back(a);
    if (a == 0)
    {
      break;
    }
  }
  reverse(v.begin(), v.end());
  for (auto itr : v)
  {
    cout << itr << endl;
  }
  return 0;
}