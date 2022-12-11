#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

struct op
{
  int t;
  int a;
  int b;
};

int main()
{
  int n, q;
  cin >> n >> q;
  vector<op> v(q);
  for (int i = 0; i < q; i++)
  {
    int t, a, b;
    cin >> t >> a >> b;
    v[i] = op{t, a, b};
  }

  set<pair<int, int>> st;
  for (int i = 0; i < q; i++)
  {
    op p = v[i];
    if (p.t == 1)
    {
      st.insert(pair(p.a, p.b));
    }
    if (p.t == 2)
    {
      st.erase(pair(p.a, p.b));
    }
    if (p.t == 3)
    {
      if (st.count(pair(p.a, p.b)) && st.count(pair(p.b, p.a)))
      {
        cout << "Yes" << endl;
      }
      else
      {
        cout << "No" << endl;
      }
    }
  }
  return 0;
}
