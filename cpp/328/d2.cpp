#include <bits/stdc++.h>
// #include "my.h"
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

  string st = "";
  for (auto c : S)
  {
    st.push_back(c);
    if (st.size() < 3)
    {
      continue;
    }
    if (st.substr(st.size() - 3) == "ABC")
    {
      st.erase(st.size() - 3, 3);
    }
  }
  cout << st << endl;
  return 0;
}