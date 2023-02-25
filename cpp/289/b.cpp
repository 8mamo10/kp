#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;
  vector<int> v;
  for (int i = 0; i < M; i++)
  {
    int a;
    cin >> a;
    a--;
    v.push_back(a);
  }

  stack<int> s;
  for (int i = 0; i < N; i++)
  {
    if (find(v.begin(), v.end(), i) != v.end())
    {
      s.push(i);
      continue;
    }
    cout << i + 1 << " ";
    while (!s.empty())
    {
      int a = s.top();
      s.pop();
      cout << a + 1 << " ";
    }
  }
  return 0;
}