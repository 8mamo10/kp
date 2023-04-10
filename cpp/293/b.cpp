#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> V(N);
  for (int i = 0; i < N; i++)
  {
    cin >> V[i];
  }
  vector<bool> called(N, false);
  for (int i = 0; i < N; i++)
  {
    if (!called[i])
    {
      called[V[i] - 1] = true;
    }
  }
  cout << count(called.begin(), called.end(), false) << endl;
  ;
  for (int i = 0; i < N; i++)
  {
    if (called[i])
      continue;
    cout << i + 1 << " ";
  }
  cout << endl;
  return 0;
}