#include <bits/stdc++.h>
// #include "my.h"
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

// using ll = long long;
// using ull = unsigned long long;
// long long INF = 1000000000000000000;

int main()
{
  int N, M;
  cin >> N >> M;
  string S;
  cin >> S;

  vector<string> v;
  string now = "";
  for (auto itr : S)
  {
    if (itr == '0')
    {
      v.push_back(now);
      now = "";
      continue;
    }
    now += itr;
  }
  v.push_back(now);
  // printv(v);

  int ans = 0;
  for (auto itr : v)
  {
    int buy = 0;
    int num_1 = count(itr.begin(), itr.end(), '1');
    int num_2 = count(itr.begin(), itr.end(), '2');
    buy += num_2;
    if (M + buy < (int)itr.length())
    {
      buy += ((int)itr.length() - M - buy);
    }
    ans = max(ans, buy);
  }
  cout << ans << endl;
  return 0;
}