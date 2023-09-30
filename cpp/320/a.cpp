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
  int a, b;
  cin >> a >> b;
  int ab = 1, ba = 1;
  for (int i = 0; i < b; i++)
  {
    ab *= a;
  }
  for (int i = 0; i < a; i++)
  {
    ba *= b;
  }
  cout << ab + ba << endl;
  return 0;
}