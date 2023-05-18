#include <bits/stdc++.h>
using namespace std;

int N;

void dump(vector<vector<int>> C)
{
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      cout << C[i][j] << " ";
    }
    cout << endl;
  }
}

bool match(vector<vector<int>> A, vector<vector<int>> B)
{
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      if (A[i][j] != 1)
      {
        continue;
      }
      if (B[i][j] != 1)
      {
        return false;
      }
    }
  }
  return true;
}

vector<vector<int>> rotate(vector<vector<int>> A)
{
  vector<vector<int>> T = A;
  // dump(T);
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      T[i][j] = A[N - 1 - j][i];
    }
  }
  return T;
}

int main()
{
  cin >> N;

  vector<vector<int>> A = vector<vector<int>>(N, vector<int>(N));
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      cin >> A[i][j];
    }
  }

  vector<vector<int>> B = vector<vector<int>>(N, vector<int>(N));
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      cin >> B[i][j];
    }
  }

  vector<vector<int>> C = A;
  // dump(C);

  for (int i = 0; i < 4; i++)
  {
    vector<vector<int>> T = rotate(C);
    // dump(T);
    if (match(T, B))
    {
      cout << "Yes" << endl;
      return 0;
    }
    C = T;
  }
  cout << "No" << endl;
  return 0;
}