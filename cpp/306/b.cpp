#include <bits/stdc++.h>
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

// using ll = long long;
using ull = unsigned long long;
// long long INF = 1000000000000000000;

int main()
{
  ull sum = 0;
  for (int i = 0; i < 64; i++)
  {
    ull A;
    cin >> A;
    sum += (A << i);
  }
  cout << sum << endl;
  return 0;
}