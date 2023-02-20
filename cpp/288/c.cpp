#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;
  vector<vector<int>> graph(N);
  for (int i = 0; i < M; i++)
  {
    int A, B;
    cin >> A >> B;
    A--;
    B--;
    graph[A].push_back(B);
    graph[B].push_back(A);
  }

  vector<bool> reach(N, false);
  int count = 0;
  for (int i = 0; i < N; i++)
  {
    if (reach[i])
    {
      continue;
    }
    count++;
    queue<int> que;
    que.push(i);
    while (!que.empty())
    {
      int q = que.front();
      que.pop();
      for (auto itr : graph[q])
      {
        if (reach[itr])
        {
          continue;
        }
        reach[itr] = true;
        que.push(itr);
      }
    }
  }
  cout << M - N + count << endl;
  return 0;
}