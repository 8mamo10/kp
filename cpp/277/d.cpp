#include <bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;

void print_vector(vector<int> v)
{
  for (auto itr = v.begin(); itr != v.end(); itr++)
  {
    cout << *itr << ",";
  }
  cout << endl;
}

int main()
{
  int n, m;
  cin >> n >> m;
  vector<int> v(n);
  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }
  // print_vector(v);
  sort(v.begin(), v.end());
  // print_vector(v);
  dsu d(n);
  for (int i = 0; i < n; i++)
  {
    int j = (i + 1) % n;
    if (v[i] == v[j] || (v[i] + 1) % m == v[j])
    {
      d.merge(i, j);
    }
  }
  vector<long long> s(n);
  for (int i = 0; i < n; i++)
  {
    s[d.leader(i)] += v[i];
  }
  long long mx = 0, tot = 0;
  for (int i = 0; i < n; i++)
  {
    mx = max(mx, s[i]);
  }
  for (int i = 0; i < n; i++)
  {
    tot += v[i];
  }
  cout << tot - mx << endl;
  return 0;
}