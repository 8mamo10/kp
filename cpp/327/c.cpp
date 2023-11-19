#include <bits/stdc++.h>
// #include "my.h"
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

// using ll = long long;
// using ull = unsigned long long;
// long long INF = 1000000000000000000;

bool is_unique(vector<int> v)
{
  set<int> st;
  for (auto itr : v)
  {
    if (st.count(itr) != 0)
    {
      return false;
    }
    st.insert(itr);
  }
  return true;
}

int main()
{
  vector<vector<int>> A(9, vector<int>(9));
  for (int i = 0; i < 9; i++)
  {
    for (int j = 0; j < 9; j++)
    {
      cin >> A[i][j];
    }
  }
  // row
  for (int i = 0; i < 9; i++)
  {
    vector<int> row = A[i];
    if (!is_unique(row))
    {
      cout << "No" << endl;
      return 0;
    }
  }
  // column
  for (int i = 0; i < 9; i++)
  {
    vector<int> column;
    for (int j = 0; j < 9; j++)
    {
      column.push_back(A[j][i]);
    }
    if (!is_unique(column))
    {
      cout << "No" << endl;
      return 0;
    }
  }
  // mini
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      vector<int> mini;
      mini.push_back(A[3 * i][3 * j]);
      mini.push_back(A[3 * i][3 * j + 1]);
      mini.push_back(A[3 * i][3 * j + 2]);
      mini.push_back(A[3 * i + 1][3 * j]);
      mini.push_back(A[3 * i + 1][3 * j + 1]);
      mini.push_back(A[3 * i + 1][3 * j + 2]);
      mini.push_back(A[3 * i + 2][3 * j]);
      mini.push_back(A[3 * i + 2][3 * j + 1]);
      mini.push_back(A[3 * i + 2][3 * j + 2]);
      if (!is_unique(mini))
      {
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
  return 0;
}