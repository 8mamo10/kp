#include <bits/stdc++.h>
#include "my.h"
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

  for (auto itr : grid)
  {
    printv(itr, false);
  }

  pair<int, int> current = {0, 0};
  pair<int, int> direction = {0, 1};

  for (int i = 0; i < N; i++)
  {
    char color = grid[current.second][current.first];
    if (color == WHITE)
    {
    }
    else if (color == BLACK)
    {
    }
    else
    {
    }
  }
  return 0;
}