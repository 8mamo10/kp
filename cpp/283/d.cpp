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
  vector<set<char>> v;

  for (size_t i = 0; i < s.length(); i++)
  {
    // debug
    // cout << ">>>" << i << ":" << s[i] << endl;
    // dump(box);
    //

    if (s[i] == '(')
    {
      set<char> x;
      v.push_back(x);
      continue;
    }
    if (s[i] == ')')
    {
      set<char> b = v[v.size() - 1];
      for (auto itr = b.begin(); itr != b.end(); itr++)
      {
        box.erase(*itr);
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
      if (v.empty())
      {
        continue;
      }
      v[v.size() - 1].insert(s[i]);
    }
  }
  cout << "Yes" << endl;
  return 0;
}