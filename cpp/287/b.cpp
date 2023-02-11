#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;
  vector<string> S(N);
  for (int i = 0; i < N; i++)
  {
    string s;
    cin >> s;
    S[i] = s;
  }
  vector<string> T(M);
  for (int i = 0; i < M; i++)
  {
    string t;
    cin >> t;
    T[i] = t;
  }
  int count = 0;
  for (auto itr_s : S)
  {
    string sub = itr_s.substr(3, 3);
    for (auto itr_t : T)
    {
      if (sub == itr_t)
      {
        count++;
        break;
      }
    }
  }
  cout << count << endl;
  return 0;
}