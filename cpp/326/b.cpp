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
  for (int i = N; i <= 919; i++)
  {
    int first = i / 100;
    int second = i / 10 % 10;
    int third = i % 10;

    if (first * second == third)
    {
      cout << i << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}