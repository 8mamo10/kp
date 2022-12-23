#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

int main()
{
  int h, w;
  cin >> h >> w;
  vector<string> s, t;
  for (int i = 0; i < h; i++)
  {
    string ss;
    cin >> ss;
    s.push_back(ss);
  }
  for (int i = 0; i < h; i++)
  {
    string tt;
    cin >> tt;
    t.push_back(tt);
  }
  for (int i = 0; i < h; i++)
  {
    string ss = s[i];
    sort(ss.begin(), ss.end());
    string tt = t[i];
    sort(tt.begin(), tt.end());
    // cout << ss << ":" << tt << endl;
    if (ss != tt)
    {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}