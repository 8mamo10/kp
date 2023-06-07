#include <bits/stdc++.h>
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

int main()
{
  // ios::sync_with_stdio(false);
  // cin.tie(nullptr);
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
  }

  int prev = 0;
  for (int i = 0; i < N; i++)
  {
    if (prev == 0)
    {
      cout << A[i] << " ";
      prev = A[i];
      continue;
    }
    if (prev > A[i])
    {
      for (int j = prev; j > A[i] + 1; j--)
      {
        cout << j - 1 << " ";
      }
    }
    else
    {
      for (int j = prev; j < A[i] - 1; j++)
      {
        cout << j + 1 << " ";
      }
    }
    cout << A[i] << " ";
    prev = A[i];
  }

  return 0;
}