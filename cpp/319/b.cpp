#include <bits/stdc++.h>
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

// using ll = long long;
// using ull = unsigned long long;
// long long INF = 1000000000000000000;

#include <iostream>
using namespace std;

/**
 * The above function takes an input integer 'n' and generates a string 's' by iterating through 'n'
 * and finding the smallest digit 'j' that divides both 'n' and 'i', and then appending that digit to
 * the string 's'.
 *
 * @return The main function is returning an integer value of 0.
 */
int main()
{
  int n;
  cin >> n;

  string s;
  for (int i = 0; i <= n; i++)
  {
    s += "-";
    for (int j = 1; j <= 9; j++)
    {
      if (n % j == 0 && i % (n / j) == 0)
      {
        // s[i] = j + '0';
        s[i] = *to_string(j).c_str();
        break;
      }
    }
  }
  cout << s << endl;

  return 0;
}
