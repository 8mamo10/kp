#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;
  vector<vector<int>> v;
  for (int i = 0; i < M; i++)
  {
    int C;
    cin >> C;
    vector<int> vv;
    for (int j = 0; j < C; j++)
    {
      int a;
      cin >> a;
      vv.push_back(a);
    }
    v.push_back(vv);
  }
  int ans = 0;
  for (int b = 0; b < (1 << M); b++)
  {
    set<int> s;
    for (int i = 0; i < M; i++)
    {
      if ((b >> i) & 1)
      {
        for (auto x : v[i])
        {
          s.insert(x);
        }
      }
    }
    ans += ((int)s.size() == N);
  }
  cout << ans << endl;
  return 0;
}