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
  int n, x;
  cin >> n >> x;
  vector<int> a(n);
  for (int i = 0; i < n - 1; i++)
  {
    cin >> a[i];
  }

  for (int i = 0; i <= 100; i++)
  {
    vector<int> a2 = a;
    a2[n - 1] = i;
    sort(a2.begin(), a2.end());
    int sum = 0;
    for (int j = 1; j < n - 1; j++)
    {
      sum += a2[j];
    }
    if (sum >= x)
    {
      cout << i << endl;
      return 0;
    }
  }
  cout << -1 << endl;
  return 0;
}