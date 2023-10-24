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
  map<int, vector<int>> m;
  for (int i = 0; i < N; i++)
  {
    int c = count(S[i].begin(), S[i].end(), 'o');
    m[c].push_back(i + 1);
  }
  for (int i = N - 1; i >= 0; i--)
  {
    if (m[i].empty())
    {
      continue;
    }
    for (auto itr : m[i])
    {
      cout << itr << " ";
    }
  }
  cout << endl;
  return 0;
}