#include <bits/stdc++.h>
// #include "my.h"
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

using ll = long long;
// using ull = unsigned long long;
// long long INF = 1000000000000000000;
// long long INF = 20;

const char WHITE = '.';
const char BLACK = '#';

int main()
{
  int H, W, N;
  cin >> H >> W >> N;

  vector<vector<char>> grid(H, vector<char>(W, WHITE));

  // x, y
  pair<int, int> pos = {0, 0};
  int dir = 0;
  // x, y
  pair<int, int> directions[] = {{0, -1}, {1, 0}, {0, 1}, {-1, 0}};

  for (int i = 0; i < N; i++)
  {
    char color = grid[pos.second][pos.first];
    if (color == WHITE)
    {
      grid[pos.second][pos.first] = BLACK;
      dir++;
      dir = dir % 4;
    }
    else
    {
      grid[pos.second][pos.first] = WHITE;
      dir--;
      if (dir < 0)
      {
        dir = 3;
      }
    }
    auto direction = directions[dir];
    pos.first += direction.first;
    if (pos.first < 0)
    {
      pos.first += W;
    }
    if (pos.first >= W)
    {
      pos.first = 0;
    }
    pos.second += direction.second;
    if (pos.second < 0)
    {
      pos.second += H;
    }
    if (pos.second >= H)
    {
      pos.second = 0;
    }
  }
  for (auto itr : grid)
  {
    for (auto itr2 : itr)
    {
      cout << itr2;
    }
    cout << endl;
  }
  return 0;
}