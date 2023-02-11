#include <bits/stdc++.h>
using namespace std;

bool dp[2505][10105];

int main()
{
  int N, X;
  cin >> N >> X;
  vector<int> c;
  for (int i = 0; i < N; i++)
  {
    int A, B;
    cin >> A >> B;
    for (int j = 0; j < B; j++)
    {
      c.push_back(A);
    }
  }
  int m = c.size();
  dp[0][0] = true;
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < X + 1; j++)
    {
      if (!dp[i][j])
        continue;
      dp[i + 1][j] = true;
      dp[i + 1][j + c[i]] = true;
    }
  }
  if (dp[m][X])
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}