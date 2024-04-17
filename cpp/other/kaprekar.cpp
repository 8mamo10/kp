#include <bits/stdc++.h>
#include <algorithm>
// #include "my.h"
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

// using ll = long long;
// using ull = unsigned long long;
// long long INF = 1000000000000000000;
// long long INF = 20;

int main()
{
  for (int i = 0; i < 1'000'000; i++)
  // for (int i = 0; i < 1000; i++)
  {
    string s = to_string(i);
    sort(s.begin(), s.end(), std::greater<>());
    // cout << s << "-";
    int from = stoi(s);
    sort(s.begin(), s.end(), std::less<>());
    // cout << s << "=";
    int to = stoi(s);
    // cout << from - to << endl;
    if (i == (from - to))
    {
      cout << from - to << endl;
    }
  }
  return 0;
}