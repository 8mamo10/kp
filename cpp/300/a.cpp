#include <bits/stdc++.h>
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

int main()
{
  // ios::sync_with_stdio(false);
  // cin.tie(nullptr);

  int N, A, B;
  cin >> N >> A >> B;

  int ans = A + B;

  for (int i = 0; i < N; i++)
  {
    int C;
    cin >> C;
    if (C == ans)
    {
      cout << i + 1 << endl;
      return 0;
    }
  }

  return 0;
}