#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

int main()
{
  int n;
  cin >> n;

  vector<long long> v(n);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }

  int q;
  cin >> q;

  for (int i = 0; i < q; i++)
  {
    int type;
    cin >> type;
    if (type == 1)
    {
      int value;
      cin >> value;
      for (int j = 0; j < n; j++)
      {
        v[j] = value;
      }
    }
    if (type == 2)
    {
      int index, add;
      cin >> index >> add;
      v[index - 1] += add;
    }
    if (type == 3)
    {
      int index;
      cin >> index;
      cout << v[index - 1] << endl;
    }
    // for (int j = 0; j < n; j++)
    // {
    //   cout << v[j] << ",";
    // }
    // cout << endl;
  }
  return 0;
}