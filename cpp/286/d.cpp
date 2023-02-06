#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, X;
  cin >> N >> X;
  map<int, int> m;

  for (int i = 0; i < N; i++)
  {
    int A, B;
    cin >> A >> B;
    m[A] = B;
  }

  vector<int> v = vector({0});
  for (auto itr = m.begin(); itr != m.end(); itr++)
  {
    int coin = itr->first;
    int num = itr->second;
    vector w = v;
    for (auto itr2 = w.begin(); itr2 != w.end(); itr2++)
    {
      for (int i = 1; i <= num; i++)
      {
        // cout << *itr2 + coin * i << endl;
        v.push_back(*itr2 + coin * i);
      }
    }
  }

  // cout << "[";
  // for (auto itr = v.begin(); itr != v.end(); itr++)
  // {
  //   cout << *itr << " ";
  // }
  // cout << "]" << endl;

  if (find(v.begin(), v.end(), X) != v.end())
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }
  return 0;
}