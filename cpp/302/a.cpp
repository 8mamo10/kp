#include <bits/stdc++.h>
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

using ull = unsigned long long;

int main()
{
  ull A, B;
  cin >> A >> B;

  ull ans = A / B;
  if (A % B != 0)
  {
    ans++;
  }
  cout << ans << endl;
  return 0;
}