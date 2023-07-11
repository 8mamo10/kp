#include <bits/stdc++.h>
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

// using ll = long long;
// long long INF = 1000000000000000000;

int main()
{
  int N;
  cin >> N;
  vector<pair<string, int>> vec(N);
  int min_age = INT_MAX;
  int start = 0;
  for (int i = 0; i < N; i++)
  {
    string S;
    cin >> S;
    int A;
    cin >> A;
    vec[i] = {S, A};
    if (A < min_age)
    {
      min_age = A;
      start = i;
    }
  }

  for (int i = start; i < N; i++)
  {
    cout << vec[i].first << endl;
  }
  for (int i = 0; i < start; i++)
  {
    cout << vec[i].first << endl;
  }

  return 0;
}