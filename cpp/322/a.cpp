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
  string s;
  cin >> n >> s;
  size_t pos = s.find("ABC");
  if (pos == string::npos)
  {
    cout << -1 << endl;
    return 0;
  }
  cout << pos + 1 << endl;
  return 0;
}