#include <bits/stdc++.h>
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

int main()
{
  int N;
  cin >> N;
  vector<string> A(N);
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
  }
  // for (auto row : A)
  // {
  //   for (auto column : row)
  //   {
  //     cout << column << ",";
  //   }
  //   cout << endl;
  // }

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      if (i == 0)
      {
        if (j == 0)
        {
          cout << A[1][0];
        }
        else
        {
          cout << A[0][j - 1];
        }
      }
      else if (i == N - 1)
      {
        if (j == N - 1)
        {
          cout << A[N - 2][N - 1];
        }
        else
        {
          cout << A[N - 1][j + 1];
        }
      }
      else
      {
        if (j == 0)
        {
          cout << A[i + 1][0];
        }
        else if (j == N - 1)
        {
          cout << A[i - 1][N - 1];
        }
        else
        {
          cout << A[i][j];
        }
      }
    }
    cout << endl;
  }

  return 0;
}