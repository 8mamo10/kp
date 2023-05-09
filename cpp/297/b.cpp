#include <bits/stdc++.h>
using namespace std;

int main()
{
  string S;
  cin >> S;
  int b1 = S.find('B');
  int b2 = S.find('B', b1 + 1);
  // cout << b1 << b2 << endl;
  if ((b1 + b2) % 2 == 0)
  {
    cout << "No" << endl;
    return 0;
  }
  int r1 = S.find('R');
  int r2 = S.find('R', r1 + 1);
  int k = S.find('K');
  // cout << r1 << k << r2 << endl;
  if (k < r1 || r2 < k)
  {
    cout << "No" << endl;
    return 0;
  }
  cout << "Yes" << endl;
  return 0;
}