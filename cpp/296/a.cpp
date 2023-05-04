#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;
  string S;
  cin >> S;

  char prev = 'X';
  for (int i = 0; i < N; i++)
  {
    if (S[i] == prev)
    {
      cout << "No" << endl;
      return 0;
    }
    prev = S[i];
  }
  cout << "Yes" << endl;
  return 0;
}