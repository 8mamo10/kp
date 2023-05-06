#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, X;
  cin >> N >> X;
  vector<int> A(N);
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
  }

  set<int> logs;
  for (auto itr : A)
  {
    int added = itr + X;
    logs.insert(added);
    if (logs.find(itr) != logs.end())
    {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}