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
  string sS = S;
  for (int i = 0; i < N; i++)
  {
    ll count = 0;
    for (int k = 0; k < N / 2; k++)
    {
      if (sS[k] == sS[sS.length() - k - 1])
      {
        continue;
      }
      count++;
    }
    price = min(price, A * i + B * count);
    sS = sS.substr(1, sS.length() - 1) + sS[0];
  }
  cout << price << endl;
  return 0;
}