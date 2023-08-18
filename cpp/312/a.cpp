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
  if (S == "ACE" ||
      S == "BDF" ||
      S == "CEG" ||
      S == "DFA" ||
      S == "EGB" ||
      S == "FAC" ||
      S == "GBD")
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  return 0;
}