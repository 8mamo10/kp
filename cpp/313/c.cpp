#include <bits/stdc++.h>
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

using ll = long long;
// using ull = unsigned long long;
// long long INF = 1000000000000000000;
bool finished(vector<ll> A)
{
  auto mx = max_element(A.begin(), A.end());
  auto mn = min_element(A.begin(), A.end());
  return (*mx - *mn <= 1);
}

int main()
{
  int N;
  cin >> N;
  vector<ll> A(N);
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
  }

  ll count = 0;
  while (!finished(A))
  {
    auto mx = max_element(A.begin(), A.end());
    auto mn = min_element(A.begin(), A.end());
    ll diff = ((*mx) - (*mn)) / 2;
    (*mx) -= diff;
    (*mn) += diff;
    count += diff;
    ////
    // cout << "---" << endl;
    // cout << count << endl;
    // for (auto itr : A)
    // {
    //   cout << itr << " ";
    // }
    // cout << endl;
    ////
  }
  // cout << "---" << endl;
  cout << count << endl;
  return 0;
}