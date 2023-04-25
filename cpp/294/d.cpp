#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, Q;
  cin >> N >> Q;
  set<int> wait;
  for (int i = 0; i < N; i++)
  {
    wait.insert(i + 1);
  }

  set<int> called;
  for (int i = 0; i < Q; i++)
  {
    int type;
    cin >> type;
    if (type == 1)
    {
      called.insert(*wait.begin());
      wait.erase(wait.begin());
    }
    else if (type == 2)
    {
      int X;
      cin >> X;
      called.erase(X);
    }
    else if (type == 3)
    {
      cout << *called.begin() << endl;
      called.erase(called.begin());
    }
  }
  return 0;
}