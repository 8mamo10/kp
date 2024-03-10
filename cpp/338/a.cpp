#include <bits/stdc++.h>
// #include "my.h"
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

using ll = long long;
// using ull = unsigned long long;
// long long INF = 1000000000000000000;
// long long INF = 20;

int main()
{
  string S;
  cin >> S;
  if (islower(S[0]))
  {
    cout << "No" << endl;
    return 0;
  }
  for (size_t i = 1; i < S.length(); i++)
  {
    if (isupper(S[i]))
    {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}