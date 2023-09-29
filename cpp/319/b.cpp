#include <bits/stdc++.h>
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

// using ll = long long;
// using ull = unsigned long long;
// long long INF = 1000000000000000000;

#include <iostream>
using namespace std;

int main(void)
{
  int n;
  cin >> n;

  string s;
  for (int i = 0; i <= n; i++)
  {
    s += "-";
    for (int j = 1; j <= 9; j++)
    {
      if (n % j == 0 && i % (n / j) == 0)
      {
        s[i] = j + '0';
        break;
      }
    }
  }
  cout << s << endl;

  return 0;
}
