#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

int main()
{
  int h, w;
  cin >> h >> w;
  vector<string> s(h), t(h);
  for (auto &it : s)
  {
    cin >> it;
  }
  for (auto &it : t)
  {
    cin >> it;
  }

  vector<string> ss(w), tt(w);
  for (int i = 0; i < h; i++)
  {
    string sss = s[i];
    string ttt = t[i];
    for (int j = 0; j < w; j++)
    {
      ss[j].push_back(sss[j]);
      tt[j].push_back(ttt[j]);
    }
  }

  sort(ss.begin(), ss.end());
  sort(tt.begin(), tt.end());

  for (int i = 0; i < w; i++)
  {
    if (ss[i] != tt[i])
    {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}