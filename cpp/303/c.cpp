#include <bits/stdc++.h>
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

// using ll = long long;

int main()
{
  int N, M, H, K;
  cin >> N >> M >> H >> K;
  string S;
  cin >> S;
  set<pair<int, int>> st;
  for (int i = 0; i < M; i++)
  {
    int X, Y;
    cin >> X >> Y;
    st.insert({X, Y});
  }

  // (x, y)
  pair<int, int> pos(0, 0);
  int hp = H;
  for (auto dir : S)
  {
    if (dir == 'R')
    {
      pos.first++;
    }
    else if (dir == 'L')
    {
      pos.first--;
    }
    else if (dir == 'U')
    {
      pos.second++;
    }
    else if (dir == 'D')
    {
      pos.second--;
    }
    hp--;
    if (hp < 0)
    {
      cout << "No" << endl;
      return 0;
    }
    if (hp < K && st.count({pos.first, pos.second}))
    {
      hp = K;
      st.erase({pos.first, pos.second});
    }
  }
  cout << "Yes" << endl;
  return 0;
}