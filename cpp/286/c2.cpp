#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
  int N;
  ll A, B;
  cin >> N >> A >> B;
  string S;
  cin >> S;

  ll price = 1e18;
  for (int i = 0; i < N; i++)
  {
    string sS = S;
    rotate(sS.begin(), sS.begin() + i, sS.end());
    ll count = 0;
    for (int j = 0; j < N / 2; j++)
    {
      if (sS[j] == sS[sS.length() - j - 1])
      {
        continue;
      }
      count++;
    }
    price = min(price, A * i + B * count);
  }
  cout << price << endl;
  return 0;
}