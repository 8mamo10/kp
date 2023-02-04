#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, P, Q, R, S;
  cin >> N >> P >> Q >> R >> S;
  vector<int> A(N);
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
  }
  vector<int> B = A;
  for (int i = 0; i <= Q - P; i++)
  {
    B[P - 1 + i] = A[R - 1 + i];
    B[R - 1 + i] = A[P - 1 + i];
  }
  for (auto itr : B)
  {
    cout << itr << " ";
  }
  cout << endl;
  return 0;
}