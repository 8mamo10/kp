#include <bits/stdc++.h>
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

// using ll = long long;
// using ull = unsigned long long;
// long long INF = 1000000000000000000;

bool is_tak_code(vector<string> vec)
{
  for (int i = 0; i < 9; i++)
  {
    for (int j = 0; j < 9; j++)
    {
      if ((0 <= i && i <= 2) && (0 <= j && j <= 2))
      {
        if (vec[i][j] != '#')
        {
          // cout << "AAA:" << i << j << vec[i][j] << endl;
          return false;
        }
      }
      if ((6 <= i && i <= 8) && (6 <= j && j <= 8))
      {
        if (vec[i][j] != '#')
        {
          // cout << "BBB" << endl;
          return false;
        }
      }
      if (i == 3 && (0 <= j && j <= 3))
      {
        if (vec[i][j] != '.')
        {
          // cout << "CCC" << endl;
          return false;
        }
      }
      if (j == 3 && (0 <= i && i <= 3))
      {
        if (vec[i][j] != '.')
        {
          // cout << "DDD" << endl;
          return false;
        }
      }
      if (i == 5 && (5 <= j && j <= 8))
      {
        if (vec[i][j] != '.')
        {
          // cout << "EEE" << endl;
          return false;
        }
      }
      if (j == 5 && (5 <= i && i <= 8))
      {
        if (vec[i][j] != '.')
        {
          // cout << "FFF" << endl;
          return false;
        }
      }
    }
  }
  return true;
}

int main()
{
  int N, M;
  cin >> N >> M;
  vector<string> S(N);
  for (int i = 0; i < N; i++)
  {
    cin >> S[i];
  }

  for (int i = 0; i <= N - 9; i++)
  {
    for (int j = 0; j <= M - 9; j++)
    {
      vector<string> vec;
      for (int k = 0; k < 9; k++)
      {
        vec.push_back(S[i + k].substr(j, 9));
      }

      /// debug
      // for (auto itr : vec)
      // {
      //   cout << itr << endl;
      // }
      // return 0;
      /// debug

      if (is_tak_code(vec))
      {
        cout << i + 1 << " " << j + 1 << endl;
      }
      /// debug
      // return 0;
      /// debug
    }
  }
  return 0;
}