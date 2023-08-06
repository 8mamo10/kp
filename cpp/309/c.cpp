#include <bits/stdc++.h>
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

using ll = long long;
// using ull = unsigned long long;
// long long INF = 1000000000000000000;

int main()
{
  int N, K;
  cin >> N >> K;
  map<ll, vector<ll>> med;
  ll total = 0;
  for (int i = 0; i < N; i++)
  {
    ll A, B;
    cin >> A >> B;
    med[A].push_back(B);
    total += B;
  }

  ll day = 0;
  for (auto itr : med)
  {
    if (total <= K)
    {
      break;
    }
    day = itr.first;
    vector<ll> vec = itr.second;
    for (auto itr2 : vec)
    {
      total -= itr2;
    }
  }
  cout << day + 1 << endl;
  return 0;
}