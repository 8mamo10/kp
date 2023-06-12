#include <bits/stdc++.h>
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

using ll = long long;

int main()
{
  // ios::sync_with_stdio(false);
  // cin.tie(nullptr);

  string S;
  cin >> S;
  // ll N;
  // cin >> N;

  ll ans = 0;
  for (size_t i = 0; i < S.length(); i++)
  {
    if (S[i] == '1')
    {
      ans += pow(2, S.length() - i - 1);
    }
  }
  cout << ans << endl;

  int decimal = 0;
  for (auto ch : S)
  {
    decimal = (decimal << 1) | (ch - '0');
  }
  cout << decimal << endl;
  cout << (decimal << 1) << endl;
  cout << (decimal << 2) << endl;
  return 0;
}
