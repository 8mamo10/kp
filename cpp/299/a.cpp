#include <bits/stdc++.h>
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

int main()
{
  // ios::sync_with_stdio(false);
  // cin.tie(nullptr);

  int N;
  cin >> N;
  string S;
  cin >> S;

  int is = S.find('*');
  int ip1 = S.find_first_of('|');
  int ip2 = S.find_last_of('|');

  if (ip1 < is && is < ip2)
  {
    cout << "in" << endl;
  }
  else
  {
    cout << "out" << endl;
  }
  return 0;
}