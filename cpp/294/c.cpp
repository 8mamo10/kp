#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, M;
  cin >> N >> M;
  vector<int> A(N);
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
  }
  vector<int> B(M);
  for (int i = 0; i < M; i++)
  {
    cin >> B[i];
  }

  vector<int> ans_a;
  vector<int> ans_b;

  int index = 0;
  while (index < N + M)
  {
    int val_a, val_b = 0;
    if (A.empty())
    {
      val_a = INT_MAX;
    }
    else
    {
      val_a = A[0];
    }
    if (B.empty())
    {
      val_b = INT_MAX;
    }
    else
    {
      val_b = B[0];
    }
    if (val_a < val_b)
    {
      ans_a.push_back(index);
      A.erase(A.begin());
    }
    else
    {
      ans_b.push_back(index);
      B.erase(B.begin());
    }
    index++;
  }
  for (auto itr : ans_a)
  {
    cout << itr + 1 << " ";
  }
  cout << endl;
  for (auto itr : ans_b)
  {
    cout << itr + 1 << " ";
  }
  cout << endl;
  return 0;
}