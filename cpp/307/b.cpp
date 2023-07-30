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

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < N; j++)
    {
      if (i == j)
      {
        continue;
      }
      string word = S[i] + S[j];
      int len = word.length();
      bool exist = true;
      for (int index = 0; index < len / 2; index++)
      {
        if (word[index] != word[len - index - 1])
        {
          exist = false;
          break;
        }
      }
      if (exist)
      {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}