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
  int N;
  cin >> N;
  vector<int> A(N);
  ll sum = 0;
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
    sum += A[i];
  }
  sort(A.begin(), A.end());
  vector<int> b(N, sum / N);
  for (int i = 0; i < sum % N; i++)
  {
    b[N - 1 - i]++;
  }
  ll ans = 0;
  for (int i = 0; i < N; i++)
  {
    ans += abs(A[i] - b[i]);
  }
  cout << ans / 2 << endl;
  return 0;
}