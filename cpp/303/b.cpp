#include <bits/stdc++.h>
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

// using ll = long long;
// using ull = unsigned long long;

int main()
{
  int N, M;
  cin >> N >> M;
  vector<vector<int>> a(M, vector<int>(N));
  for (int i = 0; i < M; i++)
  {
    for (int j = 0; j < N; j++)
    {
      cin >> a[i][j];
    }
  }

  map<int, vector<int>> neighbor;
  for (int i = 0; i < N; i++)
  {
    neighbor.insert(pair<int, vector<int>>(i + 1, {}));
  }

  for (int i = 0; i < M; i++)
  {
    for (int j = 0; j < N - 1; j++)
    {
      int first = a[i][j];
      int second = a[i][j + 1];
      if (find(neighbor[first].begin(), neighbor[first].end(), second) == neighbor[first].end())
      {
        neighbor[first].push_back(second);
      }
      if (find(neighbor[second].begin(), neighbor[second].end(), first) == neighbor[second].end())
      {
        neighbor[second].push_back(first);
      }
    }
  }

  // for (auto itr : neighbor)
  // {
  //   cout << itr.first << ":";
  //   for (auto itr2 : itr.second)
  //   {
  //     cout << itr2 << ",";
  //   }
  //   cout << endl;
  // }

  int count = 0;
  for (auto itr : neighbor)
  {
    count += N - itr.second.size() - 1;
  }
  cout << count / 2 << endl;
  return 0;
}