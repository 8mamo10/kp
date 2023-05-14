#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long A, B;
  cin >> A >> B;
  long long count = 0;
  while (A != B)
  {
    count++;
    if (A > B)
    {
      A = A - B;
    }
    else
    {
      B = B - A;
    }
  }
  cout << count << endl;
  return 0;
}