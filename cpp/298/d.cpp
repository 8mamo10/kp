#include <bits/stdc++.h>
using namespace std;

int main()
{
  // ios::sync_with_stdio(false);
  // cin.tie(nullptr);

  int Q;
  cin >> Q;
  string S = "1";
  for (int _ = 0; _ < Q; _++)
  {
    int type;
    cin >> type;
    if (type == 1)
    {
      string x;
      cin >> x;
      S += x;
    }
    else if (type == 2)
    {
      S.erase(0, 1);
    }
    else if (type == 3)
    {
      long long num = stoll(S);
      long long ans = num % 998244353;
      cout << ans << endl;
    }
    else
    {
      return 0;
    }
  }
  return 0;
}