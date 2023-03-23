#include <bits/stdc++.h>
using namespace std;

void dump(vector<int> v)
{
  for (auto itr : v)
  {
    cout << itr << " ";
  }
  cout << endl;
}

int main()
{
  int N;
  cin >> N;
  vector<int> v(N * 5);
  for (int i = 0; i < N * 5; i++)
  {
    cin >> v[i];
  }
  // dump(v);
  sort(v.begin(), v.end());
  // dump(v);
  v.erase(v.begin(), v.begin() + N);
  // dump(v);
  reverse(v.begin(), v.end());
  // dump(v);
  v.erase(v.begin(), v.begin() + N);
  // dump(v);
  cout << accumulate(v.begin(), v.end(), 0.0) / v.size() << endl;
  return 0;
}