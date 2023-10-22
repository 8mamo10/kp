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
  string S;
  cin >> S;

  for (int i = 0; i < 16; i++)
  {
    if (i % 2 == 0)
    {
      continue;
    }
    if (S[i] != '0')
    {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}