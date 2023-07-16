#include <bits/stdc++.h>
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

// using ll = long long;
// long long INF = 1000000000000000000;

int main()
{
  int N;
  cin >> N;

  if (N % 5 == 0)
  {
    cout << N << endl;
  }
  else if (N % 5 <= 2)
  {
    cout << N - N % 5 << endl;
  }
  else
  {
    cout << N + 5 - N % 5 << endl;
  }
  return 0;
}
