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
  string s;
  cin >> s;
  for (auto itr : s)
  {
    if (itr == 'a' ||
        itr == 'e' ||
        itr == 'i' ||
        itr == 'o' ||
        itr == 'u')
    {
      continue;
    }
    cout << itr;
  }
  cout << endl;
  return 0;
}