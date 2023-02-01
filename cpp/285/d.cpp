#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;
  map<string, string> m;
  for (int i = 0; i < N; i++)
  {
    string S, T;
    cin >> S >> T;
    m[S] = T;
  }

  set<string> used;
  for (auto itr : m)
  {
    string s = itr.first;
    string ns = itr.second;
    while (!used.count(ns))
    {
      used.insert(ns);
      auto it = m.find(ns);
      if (it == m.end())
      {
        break;
      }
      ns = it->second;
      if (ns == s)
      {
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
  return 0;
}