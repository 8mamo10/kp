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
  vector<string> s(m);
  for (int i = 0; i < 3; i++)
  {
    cin >> s[i];
  }

  vector<int> a = {1, 2, 3};
  int count = 0;
  do
  {
    count++;
    cout << "---" << count << "---" << endl;
    cout << a[0] << a[1] << a[2] << endl;
  } while (next_permutation(a.begin(), a.end()));

  return 0;
}