#include <bits/stdc++.h>
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

int main()
{
  // ios::sync_with_stdio(false);
  // cin.tie(nullptr);

  string S, T;
  cin >> S >> T;

  string atcoder = "atcoder";

  // input
  map<char, int> s_map;
  for (auto itr : S)
  {
    if (s_map.count(itr) == 0)
    {
      s_map.insert({itr, 1});
      continue;
    }
    s_map[itr]++;
  }
  map<char, int> t_map;
  for (auto itr : T)
  {
    if (t_map.count(itr) == 0)
    {
      t_map.insert({itr, 1});
      continue;
    }
    t_map[itr]++;
  }

  // count
  for (auto itr : s_map)
  {
    // cout << itr.first << ":" << itr.second << endl;
    char c = itr.first;
    int v = itr.second;

    if (c == '@')
    {
      continue;
    }

    if (t_map.count(c) != 0)
    {
      int sub = min(v, t_map[c]);
      t_map[c] -= sub;
      s_map[c] -= sub;
    }
  }

  for (auto itr : t_map)
  {
    // cout << itr.first << ":" << itr.second << endl;
    char c = itr.first;
    int v = itr.second;

    if (c == '@')
    {
      continue;
    }

    if (s_map.count(c) != 0)
    {
      int sub = min(v, s_map[c]);
      t_map[c] -= sub;
      s_map[c] -= sub;
    }
  }

  // // debug
  // cout << "---" << endl;
  // for (auto itr : s_map)
  // {
  //   cout << itr.first << ":" << itr.second << endl;
  // }
  // cout << "---" << endl;
  // for (auto itr : t_map)
  // {
  //   cout << itr.first << ":" << itr.second << endl;
  // }
  // //

  // mabiku
  for (auto itr : s_map)
  {
    char c = itr.first;
    int v = itr.second;

    if (c == '@')
    {
      continue;
    }

    if (atcoder.find(c) == string::npos && v > 0)
    {
      cout << "No" << endl;
      return 0;
    }
  }

  for (auto itr : t_map)
  {
    char c = itr.first;
    int v = itr.second;
    if (c == '@')
    {
      continue;
    }

    if (atcoder.find(c) == string::npos && v > 0)
    {
      cout << "No" << endl;
      return 0;
    }
  }

  // // debug
  // cout << "---" << endl;
  // for (auto itr : s_map)
  // {
  //   cout << itr.first << ":" << itr.second << endl;
  // }
  // cout << "---" << endl;
  // for (auto itr : t_map)
  // {
  //   cout << itr.first << ":" << itr.second << endl;
  // }
  // //

  int at = s_map['@'] + t_map['@'];
  int diff = 0;
  for (auto s : atcoder)
  {
    diff += abs(s_map[s] - t_map[s]);
  }
  if (at < diff)
  {
    cout << "No" << endl;
    return 0;
  }
  cout << "Yes" << endl;
  return 0;
}