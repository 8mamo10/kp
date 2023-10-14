#include <bits/stdc++.h>
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

// using ll = long long;
// using ull = unsigned long long;
// long long INF = 1000000000000000000;

size_t n, m;
string s, t;
int main()
{
  // string a = "abc";
  // string b = "aabcc";
  // string c = "abccc";
  // string d = "aaabc";
  // // cout << b.find_first_of(a) << endl;
  // // cout << b.find(a) << endl;
  // // cout << b.find_last_of(a) << endl;
  // cout << b.rfind(a) << endl;
  // cout << c.rfind(a) << endl;
  // cout << d.rfind(a) << endl;
  // // return 0;

  cin >> n >> m >> s >> t;

  auto is_prefix = []()
  {
    size_t pos = t.find(s);
    return (pos == 0);
  };

  auto is_suffix = []()
  {
    size_t pos = t.rfind(s);
    return (pos == (m - n));
  };

  if (is_prefix() && is_suffix())
  {
    cout << 0 << endl;
  }
  else if (is_prefix())
  {
    cout << 1 << endl;
  }
  else if (is_suffix())
  {
    cout << 2 << endl;
  }
  else
  {
    cout << 3 << endl;
  }
  return 0;
}