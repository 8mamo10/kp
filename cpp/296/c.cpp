#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, X;
  cin >> N >> X;
  set<int> A;
  for (int i = 0; i < N; i++)
  {
    int v;
    cin >> v;
    A.insert(v);
  }

  for (auto itr : A)
  {
    if (A.find(itr + X) != A.end())
    {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}