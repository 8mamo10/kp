#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  vector<vector<int>> v(t);
  for (auto &itr : v)
  {
    int n;
    cin >> n;
    vector<int> test(n);
    for (int i = 0; i < n; i++)
    {
      int a;
      cin >> a;
      test.push_back(a);
    }
    itr = test;
  }

  for (auto itr : v)
  {
    int count = 0;
    for (auto itr2 : itr)
    {
      if (itr2 % 2 == 1)
      {
        count++;
      }
    }
    cout << count << endl;
  }

  return 0;
}