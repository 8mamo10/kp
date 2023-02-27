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
  // for (auto itr : v)
  // {
  //   for (auto itr2 : itr)
  //   {
  //     cout << itr2 << " ";
  //   }
  //   cout << endl;
  // }

  return 0;
}