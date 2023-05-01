#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
  }

  set<int> s;
  int count = 0;
  for (auto itr : A)
  {
    if (s.find(itr) == s.end())
    {
      s.insert(itr);
    }
    else
    {
      count++;
      s.erase(itr);
    }
  }
  cout << count << endl;
  return 0;
}