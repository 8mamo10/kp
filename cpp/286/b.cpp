#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;
  string S;
  cin >> S;
  while (true)
  {
    auto pos = S.find("na");
    if (pos == string::npos)
    {
      break;
    }
    S.replace(pos, 2, "nya");
  }
  cout << S << endl;
  return 0;
}