#include <bits/stdc++.h>
// #include "my.h"
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

// using ll = long long;
// using ull = unsigned long long;
// long long INF = 1000000000000000000;

int main()
{
  // vector<int> aa = {1, 2, 3};
  // vector<int> bb = {4, 5, 6};
  // vector<int> cc = vector<int>(6);
  // merge(aa.begin(), aa.end(), bb.begin(), bb.end(), cc.begin());
  // printv(cc);
  // map<int, char> mp;
  // mp[1] = '2';
  // mp[2] = '3';
  // cout << mp[2] << endl;
  // cout << mp[3] << endl;
  // return 0;

  int n;
  string s;
  int q;
  cin >> n >> s >> q;

  vector<char> c(q), d(q);
  for (int i = 0; i < q; i++)
  {
    cin >> c[i] >> d[i];
  }
  // cout << "c:";
  // printv(c);
  // cout << "d:";
  // printv(d);

  map<char, vector<int>> m;
  for (int i = 0; i < n; i++)
  {
    m[s[i]].push_back(i);
  }

  // for (auto itr : m)
  // {
  //   cout << itr.first << ":";
  //   printv(itr.second);
  // }

  for (int i = 0; i < q; i++)
  {
    char from = c[i];
    char to = d[i];
    if (from == to)
    {
      continue;
    }
    if (m.find(to) == m.end())
    {
      m[to] = m[from];
      m.erase(from);
      continue;
    }
    vector<int> merged(m[from].size() + m[to].size());
    merge(m[from].begin(), m[from].end(), m[to].begin(), m[to].end(), merged.begin());
    m[to] = merged;
    m.erase(from);
  }

  for (int i = 0; i < n; i++)
  {
    for (auto itr : m)
    {
      if (itr.second.size() == 0)
      {
        continue;
      }
      if (find(itr.second.begin(), itr.second.end(), i) == itr.second.end())
      {
        continue;
      }
      cout << itr.first;
      break;
    }
  }
  cout << endl;
  return 0;
}