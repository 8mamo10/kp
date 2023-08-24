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
  int N, M;
  cin >> N >> M;

  set<int> st;
  for (int i = 1; i <= N; i++)
  {
    st.insert(i);
  }
  map<int, vector<int>> mp;
  for (int i = 0; i < M; i++)
  {
    int A, B;
    cin >> A >> B;
    mp[A].push_back(B);
  }

  for (auto itr : mp)
  {
    vector<int> v = itr.second;
    for (auto itr2 : v)
    {
      st.erase(itr2);
    }
  }

  if (st.size() != 1)
  {
    cout << -1 << endl;
    return 0;
  }
  cout << *st.begin() << endl;
  return 0;
}