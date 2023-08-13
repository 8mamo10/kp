#include <bits/stdc++.h>
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

// using ll = long long;
// using ull = unsigned long long;
// long long INF = 1000000000000000000;

int main()
{
  int N;
  cin >> N;
  vector<string> S(N);
  for (int i = 0; i < N; i++)
  {
    cin >> S[i];
  }

  set<string> st;
  for (auto itr : S)
  {
    if (st.count(itr) != 0)
    {
      continue;
    }
    reverse(itr.begin(), itr.end());
    if (st.count(itr) != 0)
    {
      continue;
    }
    st.insert(itr);
  }
  cout << st.size() << endl;
  return 0;
}