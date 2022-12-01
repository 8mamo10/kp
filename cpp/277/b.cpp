#include <bits/stdc++.h>
using namespace std;

bool having(string target, vector<string> list)
{
  for (int i = 0; i < (int)list.size(); i++)
  {
    if (list[i] == target)
    {
      return true;
    }
  }
  return false;
}

int main()
{
  int n;
  cin >> n;
  vector<string> s(n);
  for (int i = 0; i < n; i++)
  {
    cin >> s[i];
  }
  vector<string> marks{"H", "D", "C", "S"};
  vector<string> numbers{"A", "2", "3", "4", "5", "6", "7", "8", "9", "T", "J", "Q", "K"};
  vector<string> logs{};

  for (int i = 0; i < n; i++)
  {
    string str = s[i];
    string first = str.substr(0, 1);
    string second = str.substr(1, 1);
    if (!having(first, marks))
    {
      cout << "No" << endl;
      return -1;
    }
    if (!having(second, numbers))
    {
      cout << "No" << endl;
      return -1;
    }
    if (having(str, logs))
    {
      cout << "No" << endl;
      return -1;
    }
    logs.push_back(str);
  }
  cout << "Yes" << endl;
  return 0;
}
