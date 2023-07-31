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
  int prev = 0;
  for (int _ = 0; _ < 8; _++)
  {
    int S;
    cin >> S;
    if (S < prev)
    {
      cout << "No" << endl;
      return 0;
    }
    if (S < 100 || 675 < S)
    {
      cout << "No" << endl;
      return 0;
    }
    if (S % 25 != 0)
    {
      cout << "No" << endl;
      return 0;
    }
    prev = S;
  }
  cout << "Yes" << endl;
  return 0;
}