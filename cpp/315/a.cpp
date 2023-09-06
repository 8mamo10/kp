#include <bits/stdc++.h>
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

// using ll = long long;
// using ull = unsigned long long;
// long long INF = 1000000000000000000;
/**
 * This C++ program takes a string as input and removes all the vowels from it before printing the
 * modified string.
 *
 * @return The main function is returning an integer value of 0.
 */

int main()
{
  string s;
  cin >> s;
  for (auto itr : s)
  {
    if (itr == 'a' ||
        itr == 'e' ||
        itr == 'i' ||
        itr == 'o' ||
        itr == 'u')
    {
      continue;
    }
    cout << itr;
  }
  cout << endl;
  return 0;
}