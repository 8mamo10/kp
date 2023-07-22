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
  int top = H, bottom = H - 1;
  for (int i = 0; i < H; i++)
  {
    if (S[i].find('#') != string::npos)
    {
      if (top == H)
      {
        top = i;
      }
    }
    else
    {
      if (top != H)
      {
        bottom = i - 1;
      }
    }
  }
  // cout << "top:" << top << endl;
  // cout << "bottom:" << bottom << endl;

  int num = W;
  int valid_line = 0;
  int invalid_line = 0;
  for (int i = top; i <= bottom; i++)
  {
    int count = 0;
    for (size_t j = 0; (j = S[i].find('#', j)) != string::npos; j++)
    {
      count++;
    }
    if (count < num)
    {
      num = count;
      invalid_line = i;
    }
    else
    {
      valid_line = i;
    }
    // cout << i << ":" << count << endl;
  }

  for (int i = 0; i < W; i++)
  {
    if (S[valid_line][i] != S[invalid_line][i])
    {
      cout << invalid_line + 1 << " " << i + 1 << endl;
      return 0;
    }
  }

  return 0;
}