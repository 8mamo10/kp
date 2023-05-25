#include <bits/stdc++.h>
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

int main()
{
  // ios::sync_with_stdio(false);
  // cin.tie(nullptr);

  int N, T;
  cin >> N >> T;
  vector<int> C(N);
  for (int i = 0; i < N; i++)
  {
    cin >> C[i];
  }
  vector<int> R(N);
  for (int i = 0; i < N; i++)
  {
    cin >> R[i];
  }

  // color
  int winner = 0;
  int max_val = 0;
  for (int i = 0; i < N; i++)
  {
    if (C[i] == T && R[i] > max_val)
    {
      max_val = R[i];
      winner = i;
    }
  }
  if (winner != 0)
  {
    cout << winner + 1 << endl;
    return 0;
  }

  int color = C[0];
  for (int i = 0; i < N; i++)
  {
    if (C[i] == color && R[i] > max_val)
    {
      max_val = R[i];
      winner = i;
    }
  }
  cout << winner + 1 << endl;
  return 0;
}