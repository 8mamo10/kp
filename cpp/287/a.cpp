#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;
  int cnt_for = 0;
  int cnt_against = 0;
  for (int i = 0; i < N; i++)
  {
    string S;
    cin >> S;
    if (S == "For")
    {
      cnt_for++;
    }
    else if (S == "Against")
    {
      cnt_against++;
    }
  }
  if (cnt_for > cnt_against)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  return 0;
}