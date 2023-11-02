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
  string T;
  cin >> T;
  vector<string> S(N);
  for (int i = 0; i < N; i++)
  {
    cin >> S[i];
  }

  vector<int> ans;
  for (int i = 0; i < N; i++)
  {
    string a = S[i];
    // 1
    if (a == T)
    {
      ans.push_back(i + 1);
      continue;
    }
    // 2
    for (size_t j = 0; j < a.length(); j++)
    {
      string b = a;
      if (b.erase(j, 1) == T)
      {
        ans.push_back(i + 1);
        continue;
      }
    }
    // 3
    for (size_t j = 0; j < T.length(); j++)
    {
      string c = T;
      if (c.erase(j, 1) == a)
      {
        ans.push_back(i + 1);
        continue;
      }
    }
    // 4
    if (a.length() != T.length())
    {
      continue;
    }
    int count = 0;
    for (size_t j = 0; j < a.length(); j++)
    {
      if (a[j] != T[j])
      {
        count++;
      }
    }
    if (count == 1)
    {
      ans.push_back(i + 1);
    }
  }

  cout << ans.size() << endl;
  for (auto itr : ans)
  {
    cout << itr << " ";
  }
  cout << endl;
  return 0;
}