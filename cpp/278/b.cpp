#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

bool misunderstanding_time(int h, int m)
{
  int a = h / 10;
  int b = h % 10;
  int c = m / 10;
  int d = m % 10;

  int ac = a * 10 + c;
  int bd = b * 10 + d;
  if (ac < 24 && bd < 60)
  {
    return true;
  }
  return false;
}

int main()
{
  int h, m;
  cin >> h >> m;

  while (!misunderstanding_time(h, m))
  {
    m++;
    if (m == 60)
    {
      m = 0;
      h++;
    }
    if (h == 24)
    {
      h = 0;
    }
  }
  printf("%d %d\n", h, m);
  return 0;
}