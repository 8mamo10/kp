#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;

  int ab;
  if (N % 2 == 1)
  {
    ab = N / 2 + 1;
  }
  else
  {
    ab = N / 2;
  }

  long long count = 0;
  for (int i = 1; i <= ab; i++)
  {
    int a, b = 0;
    if (ab % i == 0)
    {
      a = i;
      b = ab / a;
      count++;
    }
    if (a != b)
    {
      count++;
    }
  }
  cout << count * 2 << endl;
  return 0;
}