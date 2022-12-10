#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

struct operation
{
  int t;
  int a;
  int b;
};

int main()
{
  int n, q;
  cin >> n >> q;
  vector<operation> v;
  for (int i = 0; i < q; i++)
  {
    operation op{};
    cin >> op.t >> op.a >> op.b;
    v.push_back(op);
  }
  vector<vector<int>> f(n + 1);
  int t, a, b;
  for (int i = 0; i < q; i++)
  {
    t = v[i].t;
    a = v[i].a;
    b = v[i].b;

    vector<int>::iterator itr;
    bool ab, ba;
    switch (t)
    {
    case 1:
      ab = (find(f[a].begin(), f[a].end(), b) != f[a].end());
      if (ab)
      {
        break;
      }
      f[a].push_back(b);
      break;
    case 2:
      itr = remove(begin(f[a]), end(f[a]), b);
      f[a].erase(itr, cend(f[a]));
      break;
    case 3:
      ab = (find(f[a].begin(), f[a].end(), b) != f[a].end());
      ba = (find(f[b].begin(), f[b].end(), a) != f[b].end());
      if (ab && ba)
      {
        cout << "Yes" << endl;
      }
      else
      {
        cout << "No" << endl;
      }
      break;
    }
  }

  return 0;
}