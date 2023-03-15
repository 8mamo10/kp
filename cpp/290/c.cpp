#include <bits/stdc++.h>
using namespace std;

int main()
{
  int N, K;
  cin >> N >> K;
  set<int> st;
  for (int i = 0; i < N; i++)
  {
    int A;
    cin >> A;
    st.insert(A);
  }
  for (int i = 0; i < K; i++)
  {
    if (st.find(i) == st.end())
    {
      cout << i << endl;
      return 0;
    }
  }
  cout << K << endl;
  return 0;
}