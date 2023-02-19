#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, K;
  cin >> N >> K;
  vector<string> v;
  for (int i = 0; i < N; i++)
  {
    string S;
    cin >> S;
    v.push_back(S);
  }
  vector<string> sub_v = {v.begin(), v.begin() + K};

  sort(sub_v.begin(), sub_v.end());
  for (int i = 0; i < K; i++)
  {
    cout << sub_v[i] << endl;
  }
  return 0;
}