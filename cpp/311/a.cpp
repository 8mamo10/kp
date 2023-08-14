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
  int N;
  cin >> N;
  string S;
  cin >> S;
  bool a = false, b = false, c = false;
  for (int i = 0; i < N; i++)
  {
    if (S[i] == 'A')
    {
      a = true;
    }
    if (S[i] == 'B')
    {
      b = true;
    }
    if (S[i] == 'C')
    {
      c = true;
    }
    if (a && b && c)
    {
      cout << i + 1 << endl;
      return 0;
    }
  }
  return 0;
}