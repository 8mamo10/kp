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
  vector<int> vec(N + 1, INT_MAX);
  set<int> s;

  for (int i = 0; i < N * 3; i++)
  {
    int A;
    cin >> A;
    if (s.find(A) == s.end())
    {
      s.insert(A);
    }
    else if (vec[A] == INT_MAX)
    {
      vec[A] = i + 1;
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

  for (int i = 0; i < N; i++)
  {
    auto itr = min_element(vec.begin(), vec.end());
    size_t index = distance(vec.begin(), itr);
    cout << index << " ";
    vec[index] = INT_MAX;
  }
  cout << endl;
  return 0;
}