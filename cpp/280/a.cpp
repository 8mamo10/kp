#include <bits/stdc++.h>
using namespace std;

int main()
{
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  for (auto &it : s)
  {
    cin >> it;
  }

  int count = 0;
  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w; j++)
    {
      if (s[i][j] == '#')
      {
        count++;
      }
    }
  }
  cout << count << endl;
  return 0;
}