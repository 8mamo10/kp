#include <bits/stdc++.h>
//    #include "my.h"
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

// using ll = long long;
// using ull = unsigned long long;
// long long INF = 1000000000000000000;

int main()
{
  string s;
  cin >> s;
  string id = s.substr(3, 3);
  int num = atoi(id.c_str());
  if (num == 316)
  {
    cout << "No" << endl;
    return 0;
  }
  if (num < 1 || 349 < num)
  {
    cout << "No" << endl;
    return 0;
  }
  cout << "Yes" << endl;
  return 0;
}