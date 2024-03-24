#include <bits/stdc++.h>
using namespace std;

bool having(string target, vector<string> list)
{
  for (size_t i = 0; i < list.size(); i++)
  {
    if (list[i] == target)
    {
      return true;
    }
  }
  return false;
}

template <typename T>
void printv(T v, bool csv = true)
{
  for (size_t i = 0; i < v.size(); i++)
  {
    cout << v[i];
    if (csv)
    {
      cout << ",";
    }
  }
  cout << endl;
}
