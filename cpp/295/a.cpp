#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;
  for (int i = 0; i < N; i++)
  {
    string s;
    cin >> s;
    if (s == "and" || s == "not" || s == "that" || s == "the" || s == "you")
    {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}