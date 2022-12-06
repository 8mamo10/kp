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

void print_vector_string_csv(vector<string> v)
{
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << ",";
  }
  cout << endl;
}

void print_vector_int_blank(vector<int> v)
{
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;
}