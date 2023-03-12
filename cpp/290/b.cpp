#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, K;
  cin >> N >> K;
  string S;
  cin >> S;
  int count = 0;
  for (int i = 0; i < N; i++)
  {
    if (S[i] == 'x')
    {
      continue;
    }
    count++;
    if (count > K)
    {
      S[i] = 'x';
    }
  }
  cout << S << endl;
  return 0;
}