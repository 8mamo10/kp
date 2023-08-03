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
  map<long double, vector<int>, std::greater<long double>> results;
  for (int i = 0; i < N; i++)
  {
    long double A, B;
    cin >> A >> B;
    long double d = A / (A + B);
    // cout << d << endl;
    results[d].push_back(i + 1);
  }
  for (auto itr : results)
  {
    for (auto itr2 : itr.second)
    {
      cout << itr2 << " ";
    }
  }
  cout << endl;
  return 0;
}