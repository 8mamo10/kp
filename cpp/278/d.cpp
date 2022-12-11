#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

int main()
{
  int n;
  cin >> n;

  map<int, long long> m;
  for (int i = 0; i < n; i++)
  {
    int a;
    cin >> a;
    m[i] = a;
  }

  int q;
  cin >> q;

  int base = 0;

  for (int i = 0; i < q; i++)
  {
    int type;
    cin >> type;
    if (type == 1)
    {
      cin >> base;
      m.clear();
    }
    if (type == 2)
    {
      int index, add;
      cin >> index >> add;
      m[index - 1] += add;
    }
    if (type == 3)
    {
      int index;
      cin >> index;
      cout << base + m[index - 1] << endl;
    }
  }
  return 0;
}