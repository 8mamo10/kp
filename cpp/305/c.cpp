#include <bits/stdc++.h>
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

// using ll = long long;
// long long INF = 1000000000000000000;

int main()
{
  int H, W;
  cin >> H >> W;
  vector<string> S(H);
  for (int i = 0; i < H; i++)
  {
    cin >> S[i];
  }
  int top = 0, bottom = 0;
  for (int i = 0; i < H; i++)
  {
    if (S[i].find('#') == string::npos)
    {
      if (top != 0)
      {
        bottom = i - 1;
      }
      continue;
    }
    if (top == 0)
    {
      top = i;
    }
  }
  cout << top << endl;
  cout << bottom << endl;
  return 0;
}