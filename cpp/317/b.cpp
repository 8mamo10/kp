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
  int n;
  cin >> n;
  set<int> st;
  int low = INT_MAX;
  int high = -1;
  for (int i = 0; i < n; i++)
  {
    int a;
    cin >> a;
    st.insert(a);
    low = min(low, a);
    high = max(high, a);
  }
  for (int i = low; i <= high; i++)
  {
    if (st.count(i) == 0)
    {
      cout << i << endl;
      return 0;
    }
  }
  return 0;
}