#include <bits/stdc++.h>
using namespace std;

void dump(set<char> s)
{
  cout << "[";
  for (auto itr = s.begin(); itr != s.end(); itr++)
  {
    cout << *itr << ",";
  }
  cout << "]" << endl;
}

int main()
{
  string s;
  cin >> s;
  set<char> box;
  vector<int> v;

  for (size_t i = 0; i < s.length(); i++)
  {
    // debug
    // cout << ">>>" << i << ":" << s[i] << endl;
    // dump(box);
    //

    if (s[i] == '(')
    {
      v.push_back(i);
      continue;
    }
    if (s[i] == ')')
    {
      int j = v[v.size() - 1];
      int length = i - j;
      if (length > 1)
      {
        string sub = s.substr(j + 1, length);
        for (size_t x = 0; x < sub.length(); x++)
        {
          box.erase(sub[x]);
        }
      }
      v.pop_back();
      continue;
    }
    if (box.find(s[i]) != box.end())
    {
      cout << "No" << endl;
      return 0;
    }
    else
    {
      box.insert(s[i]);
    }
  }
  cout << "Yes" << endl;
  return 0;
}