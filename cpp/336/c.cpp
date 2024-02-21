#include <bits/stdc++.h>
// #include "my.h"
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

using ll = long long;
// using ull = unsigned long long;
long long INF = 1000000000000000000;
// long long INF = 20;

int main()
{
  ll N;
  cin >> N;
  ll count = 0;
  for (ll i = 0; i < INF; i += 2)
  {
    string s = to_string(i);
    if (s.find('1') != string::npos ||
        s.find('3') != string::npos ||
        s.find('5') != string::npos ||
        s.find('7') != string::npos ||
        s.find('9') != string::npos)
    {
      continue;
    }
    count++;
    if (count == N)
    {
      cout << i << endl;
      return 0;
    }
  }
  return 0;
}