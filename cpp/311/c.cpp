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
  vector<int> A(N + 1);
  for (int i = 1; i <= N; i++)
  {
    cin >> A[i];
  }

  vector<int> visited(N + 1, false), path;
  int next = 1;
  while (!visited[next])
  {
    visited[next] = true;
    path.push_back(next);
    next = A[next];
  }

  // B[1] = A[B[M]]
  auto start = find(path.begin(), path.end(), next);
  vector<int> res;
  for (auto itr = start; itr != path.end(); itr++)
  {
    res.push_back(*itr);
  }

  size_t count = res.size();
  cout << count << endl;
  for (auto itr : res)
  {
    cout << itr << " ";
  }
  cout << endl;
  return 0;
}