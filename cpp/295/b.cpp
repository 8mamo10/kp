#include <bits/stdc++.h>
using namespace std;

int R, C;
vector<vector<char>> result;

void bom(int y, int x, int num)
{
  // cout << "-----" << endl;
  // cout << y << ":" << x << ":" << num << endl;
  if (num < 0)
  {
    return;
  }
  if (y < 0 || y >= R)
  {
    return;
  }
  if (x < 0 || x >= C)
  {
    return;
  }
  // cout << "----- BOM!! ----- " << y << ":" << x << endl;
  result[y][x] = '.';
  bom(y - 1, x, num - 1);
  bom(y + 1, x, num - 1);
  bom(y, x - 1, num - 1);
  bom(y, x + 1, num - 1);
}

int main()
{
  cin >> R >> C;
  vector<vector<char>> matrix;
  for (int y = 0; y < R; y++)
  {
    vector<char> row;
    for (int x = 0; x < C; x++)
    {
      char B;
      cin >> B;
      row.push_back(B);
    }
    matrix.push_back(row);
  }

  result = matrix;

  for (int y = 0; y < R; y++)
  {
    for (int x = 0; x < C; x++)
    {
      char c = matrix[y][x];
      if (c == '.' || c == '#')
      {
        continue;
      }
      bom(y, x, atoi(&c));
    }
  }

  for (auto y : result)
  {
    for (auto x : y)
    {
      cout << x;
    }
    cout << endl;
  }

  return 0;
}