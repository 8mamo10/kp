#include <bits/stdc++.h>
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

// using ll = long long;
// using ull = unsigned long long;
// long long INF = 1000000000000000000;
bool finished(vector<int> A)
{
  auto mx = max_element(A.begin(), A.end());
  auto mn = min_element(A.begin(), A.end());
  return (*mx - *mn <= 1);
}

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
  }

  int count = 0;
  while (!finished(A))
  {
    auto mx = max_element(A.begin(), A.end());
    (*mx)--;
    auto mn = min_element(A.begin(), A.end());
    (*mn)++;
    count++;
  }
  cout << count << endl;
  return 0;
}