#include <bits/stdc++.h>
using namespace std;

bool match(char a, char b)
{
  return a == '?' || b == '?' || a == b;
}

int main()
{
  string S, T;
  cin >> S >> T;
  vector<int> prefix(S.size() + 1, false);
  vector<int> suffix(S.size() + 1, false);

  prefix[0] = true;
  for (int i = 0; i < T.size(); i++)
  {
    if (!match(S[i], T[i]))
    {
      break;
    }
    prefix[i + 1] = true;
  }

  reverse(S.begin(), S.end());
  reverse(T.begin(), T.end());

  suffix[0] = true;
  for (int i = 0; i < T.size(); i++)
  {
    if (!match(S[i], T[i]))
    {
      break;
    }
    suffix[i + 1] = true;
  }

  for (int i = 0; i <= T.size(); i++)
  {
    if (prefix[i] && suffix[T.size() - i])
    {
      cout << "Yes" << endl;
    }
    else
    {
      cout << "No" << endl;
    }
  }

  return 0;
}