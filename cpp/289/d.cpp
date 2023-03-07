#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
  }
  int M;
  cin >> M;
  vector<int> B(M);
  for (int i = 0; i < M; i++)
  {
    cin >> B[i];
  }
  int X;
  cin >> X;

  vector<int> dp(X + 1), available(X + 1, 1);
  for (auto b : B)
  {
    available[b] = 0;
  }
  dp[0] = 1;
  for (int i = 1; i <= X; i++)
  {
    if (!available[i])
    {
      dp[i] = 0;
    }
    else
    {
      for (auto a : A)
      {
        if (i >= a)
        {
          dp[i] |= dp[i - a];
        }
      }
    }
  }
  cout << (dp[X] ? "Yes" : "No") << endl;
  return 0;
}