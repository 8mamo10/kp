#include <bits/stdc++.h>
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

// using ll = long long;
// long long INF = 1000000000000000000;

int main()
{
  char P, Q;
  cin >> P >> Q;

  vector<int> vec{3, 1, 4, 1, 5, 9};
  vector<int> d{0};
  for (auto itr : vec)
  {
    int pre = d[d.size() - 1];
    d.push_back(pre + itr);
  }

  // for (auto itr : d)
  // {
  //   cout << itr << " ";
  // }
  // cout << endl;

  // printf("%d\n", 'A');
  // printf("%d\n", 'F');

  int start = P - 65;
  int end = Q - 65;

  if (start > end)
  {
    swap(start, end);
  }

  // cout << start << ":" << end << endl;

  cout << d[end] - d[start] << endl;

  return 0;
}