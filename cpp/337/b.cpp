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

  auto itr = unique(S.begin(), S.end());
  // for (itr = S.begin(); itr != S.end(); ++itr)
  // {
  //   cout << *itr << endl;
  // }
  S.resize(distance(S.begin(), itr));
  // cout << S << endl;
  // return 0;
  if (S.length() != 3)
  {
    cout << "No" << endl;
    return 0;
  }
  if (S[0] != 'A')
  {
    cout << "No" << endl;
    return 0;
  }
  if (S.find('B') == string::npos)
  {
    cout << "No" << endl;
    return 0;
  }
  if (S[S.length() - 1] != 'C')
  {
    cout << "No" << endl;
    return 0;
  }
  cout << "Yes" << endl;
  return 0;
}