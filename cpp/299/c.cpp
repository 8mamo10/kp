#include <bits/stdc++.h>
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

int main()
{
  // ios::sync_with_stdio(false);
  // cin.tie(nullptr);

  int N;
  cin >> N;
  string S;
  cin >> S;

  if (S.find('-') == string::npos)
  {
    cout << -1 << endl;
    return 0;
  }
  if (S.find('o') == string::npos)
  {
    cout << -1 << endl;
    return 0;
  }

  int x = 0;
  int count = 0;
  bool dango = false;
  for (int i = 0; i < N; i++)
  {
    if (S[i] == 'o')
    {
      if (!dango)
      {
        dango = true;
      }
      count++;
    }
    if (S[i] == '-')
    {
      if (dango)
      {
        dango = false;
      }
      x = max(count, x);
      count = 0;
    }
  }
  if (dango)
  {
    x = max(count, x);
  }
  if (x == 0)
  {
    cout << -1 << endl;
  }
  else
  {
    cout << x << endl;
  }
  return 0;
}