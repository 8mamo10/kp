#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
  int n;
  cin >> n;
  vector<int> a(n);
  for (auto &itr : a)
  {
    cin >> itr;
  }
  int q;
  cin >> q;
  for (int i = 0; i < q; i++)
  {
    int type;
    cin >> type;
    if (type == 1)
    {
      int k, x;
      cin >> k >> x;
      a[k - 1] = x;
    }
    else if (type == 2)
    {
      int k;
      cin >> k;
      cout << a[k - 1] << endl;
    }
    else
    {
      continue;
    }
  }
  return 0;
}