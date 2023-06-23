#include <bits/stdc++.h>
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

// using ull = unsigned long long;

int main()
{
  // int N, M;
  // cin >> N >> M;
  // vector<string> S(N);
  // for (int i = 0; i < N; i++)
  // {
  //   cin >> S[i];
  // }

  vector<string> S;
  S.push_back("aaa");
  S.push_back("bbb");
  S.push_back("ccc");
  do
  {
    for (auto itr : S)
    {
      cout << itr << " ";
    }
    cout << endl;
  } while (next_permutation(S.begin(), S.end()));
  return 0;
}