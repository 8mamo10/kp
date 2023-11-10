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
  for (int i = N; i < 1000; i++)
  {
    int first = i / 100;
    int second = (i - first * 100) / 10;
    int third = i - first * 100 - second * 10;

    if (first * second == third)
    {
      cout << i << endl;
      return 0;
    }
  }
  return 0;
}