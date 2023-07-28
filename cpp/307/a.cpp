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
  int sum = 0;
  for (int i = 0; i < N * 7; i++)
  {
    int A;
    cin >> A;
    sum += A;
    if (i % 7 == 6)
    {
      cout << sum << " ";
      sum = 0;
    }
  }
  cout << endl;
  return 0;
}