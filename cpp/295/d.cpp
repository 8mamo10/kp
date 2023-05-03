#include <bits/stdc++.h>
using namespace std;

int main()
{
  string S;
  cin >> S;

  set<int> reg;
  int count = 0;
  for (size_t i = 0; i < S.length(); i++)
  {
    for (size_t j = i + 1; j <= S.length(); j++)
    {
      // printf("=====%lu:%lu=====\n", i, j);
      string sub = S.substr(i, j - i);
      // cout << sub << endl;
      //  sort(sub.begin(), sub.end());
      for (auto ch : sub)
      {
        int val = atoi(&ch);
        if (reg.find(val) == reg.end())
        {
          reg.insert(val);
        }
        else
        {
          reg.erase(val);
        }
      }
      if (reg.empty())
      {
        // printf("Found!=%lu:%lu:%s\n", i, j, sub.c_str());
        count++;
      }
      reg.clear();
    }
  }
  cout << count << endl;
  return 0;
}