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
  int m;
  cin >> m;
  vector<int> d(m);
  int sum = 0;
  for (int i = 0; i < m; i++)
  {
    cin >> d[i];
    sum += d[i];
  }

  int middle = sum / 2 + 1;

  sum = 0;
  for (int i = 0; i < m; i++)
  {
    if (sum + d[i] >= middle)
    {
      cout << i + 1 << " " << middle - sum << endl;
      return 0;
    }
    sum += d[i];
  }
  return 0;
}