#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

int main()
{
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < k; i++)
  {
    a.erase(a.begin());
    a.push_back(0);
  }
  for (size_t i = 0; i < a.size(); i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;
  return 0;
}