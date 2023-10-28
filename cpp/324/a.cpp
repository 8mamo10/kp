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
  vector<int> A(N);
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
  }
  for (auto itr : A)
  {
    if (itr != A[0])
    {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}