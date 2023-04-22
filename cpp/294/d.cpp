#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, Q;
  cin >> N >> Q;
  vector<int> wait;
  for (int i = 0; i < N; i++)
  {
    wait.push_back(i + 1);
  }

  vector<int> called;
  for (int i = 0; i < Q; i++)
  {
    int type;
    cin >> type;
    if (type == 1)
    {
      called.push_back(wait[0]);
      wait.erase(wait.begin());
    }
    else if (type == 2)
    {
      int X;
      cin >> X;
      auto itr = find(called.begin(), called.end(), X);
      called.erase(itr);
    }
    else if (type == 3)
    {
      sort(called.begin(), called.end());
      cout << called[0] << endl;
    }
  }
  return 0;
}