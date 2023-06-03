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

  int t = 0, a = 0;
  int threshold = (N % 2 == 0) ? (N / 2) : (N / 2 + 1);
  for (int i = 0; i < N; i++)
  {
    if (S[i] == 'T')
    {
      t++;
    }
    else
    {
      a++;
    }

    if (t >= threshold)
    {
      cout << "T" << endl;
      return 0;
    }
    if (a >= threshold)
    {
      cout << "A" << endl;
      return 0;
    }
  }
  return 0;
}