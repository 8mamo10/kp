#include <bits/stdc++.h>
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

// using ll = long long;
// long long INF = 1000000000000000000;

int main()
{
  string N;
  cin >> N;

  int len = N.length();
  if (len < 4)
  {
    cout << N << endl;
  }
  else
  {
    for (size_t i = 0; i < N.length() - 3; i++)
    {
      N[N.length() - 1 - i] = '0';
    }
    cout << N << endl;
  }
  return 0;
}