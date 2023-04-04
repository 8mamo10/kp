#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, Q;
  cin >> N >> Q;
  vector<int> players(N, 0);
  for (int i = 0; i < Q; i++)
  {
    int e, x;
    cin >> e >> x;
    x--;
    switch (e)
    {
    case 1:
      players[x] += 1;
      break;
    case 2:
      players[x] += 2;
      break;
    case 3:
      if (players[x] >= 2)
      {
        cout << "Yes" << endl;
      }
      else
      {
        cout << "No" << endl;
      }
      break;
    }
  }
  return 0;
}