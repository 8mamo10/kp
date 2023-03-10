#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;
  vector<int> scores(N + 1);
  for (int i = 1; i <= N; i++)
  {
    cin >> scores[i];
  }
  vector<int> answers(M);
  for (int i = 0; i < M; i++)
  {
    cin >> answers[i];
  }
  int sum = 0;
  for (auto itr : answers)
  {
    sum += scores[itr];
  }
  cout << sum << endl;
  return 0;
}