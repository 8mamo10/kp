#include <bits/stdc++.h>
using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int N, Q;
  cin >> N >> Q;

  map<int, vector<int>> box;
  map<int, set<int>> number;

  for (int _ = 0; _ < Q; _++)
  {
    int type;
    cin >> type;
    int i, j;
    if (type == 1)
    {
      cin >> i >> j;
      box[j].push_back(i);
      sort(box[j].begin(), box[j].end());
      number[i].insert(j);
    }
    else if (type == 2)
    {
      cin >> i;

      for (auto itr : box[i])
      {
        cout << itr << " ";
      }
      cout << endl;
    }
    else if (type == 3)
    {
      cin >> i;

      for (auto itr : number[i])
      {
        cout << itr << " ";
      }
      cout << endl;
    }
  }

  return 0;
}