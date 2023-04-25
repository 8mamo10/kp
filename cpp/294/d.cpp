#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, Q;
  cin >> N >> Q;

  int last = 0;
  set<int> called;
  for (int i = 0; i < Q; i++)
  {
    int type;
    cin >> type;
    if (type == 1)
    {
      called.insert(++last);
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
    }
  }
  return 0;
}