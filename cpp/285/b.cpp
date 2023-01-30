#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;
  string S;
  cin >> S;
  for (int i = 1; i < N; i++)
  {
    int l = 0;
    for (int j = 0; j + i < N; j++)
    {
      if (S[j] != S[j + i])
      {
        l++;
      }
      else
      {
        break;
      }
    }
    cout << l << endl;
  }
  return 0;
}