#include <bits/stdc++.h>
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

int main()
{
  int A, B;
  cin >> A >> B;
  if ((A - 1) / 3 != (B - 1) / 3)
  {
    cout << "No" << endl;
    return 0;
  }
  if (B - A == 2)
  {
    cout << "No" << endl;
    return 0;
  }
  cout << "Yes" << endl;
  return 0;
}
