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
  vector<int> vec(N * 3 + 1, 0);
  set<int> s1;
  set<int> s2;

  for (int i = 0; i < N * 3; i++)
  {
    int A;
    cin >> A;
    if (s1.find(A) == s1.end())
    {
      s1.insert(A);
    }
    else if (s2.find(A) == s2.end())
    {
      vec[i] = A;
      s2.insert(A);
    }
    else
    {
      // ignore
    }
  }

  for (size_t i = 0; i < vec.size(); i++)
  {
    // printf("%lu:%d\n", i, vec[i]);
  }

  for (auto itr : vec)
  {
    if (itr == 0)
    {
      continue;
    }
    cout << itr << " ";
  }
  cout << endl;
  return 0;
}