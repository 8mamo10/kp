#include <bits/stdc++.h>
using namespace std;

void print_m(map<int, vector<int>> m)
{
  auto begin = m.begin(), end = m.end();
  for (auto itr = begin; itr != end; itr++)
  {
    cout << "key=" << itr->first << ",";
    cout << "value=";
    auto v = itr->second;
    for (auto itr2 = v.begin(); itr2 != v.end(); itr2++)
    {
      cout << *itr2 << ",";
    }
    cout << endl;
  }
}

int main()
{
  int n;
  cin >> n;
  map<int, vector<int>> to;
  for (int i = 0; i < n; i++)
  {
    int a, b;
    cin >> a >> b;
    to[a].push_back(b);
    to[b].push_back(a);
  }
  // print_m(to);
  queue<int> q;
  set<int> reached;

  q.push(1);
  reached.insert(1);

  while (!q.empty())
  {
    int v = q.front();
    q.pop();
    for (int u : to[v])
    {
      if (reached.count(u) != 0)
      {
        continue;
      }
      reached.insert(u);
      q.push(u);
    }
  }
  int max = 1;
  for (auto itr = reached.begin(); itr != reached.end(); itr++)
  {
    if (*itr > max)
    {
      max = *itr;
    }
  }
  cout << max << endl;

  return 0;
}
