#include <bits/stdc++.h>
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

int main()
{
  // ios::sync_with_stdio(false);
  // cin.tie(nullptr);

  int N;
  cin >> N;

  int l = 1, r = N;
  while (l + 1 < r)
  {
    int m = (l + r) / 2;
    cout << "? " << m << endl;
    int ans;
    cin >> ans;
    if (ans == 0)
    {
      l = m;
    }
    else
    {
      r = m;
    }
  }
  cout << "! " << l << endl;
  return 0;
}