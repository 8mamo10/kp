#include <bits/stdc++.h>
using namespace std;

struct test
{
  int N;
  int D;
  int K;
};

int main()
{
  int T;
  cin >> T;
  vector<test> tests(T);
  for (int i = 0; i < T; i++)
  {
    test t;
    cin >> t.N >> t.D >> t.K;
    tests[i] = t;
  }

  for (int i = 0; i < T; i++)
  {
    test t = tests[i];
    int N = t.N;
    int D = t.D;
    int K = t.K;
    // printf("%d-%d-%d\n", N, D, K);

    vector<bool> v(N, false);
    int last = 0;
    int x = 0;
    for (int j = 0; j < N; j++)
    {
      if (j == 0)
      {
        x = 0;
        v[x] = true;
        last = x;
      }
      else
      {
        x = (last + D) % N;
        // debug
        // for (auto itr : v)
        // {
        //   cout << itr;
        // }
        // cout << endl;

        while (v[x])
        {
          // debug
          // for (auto itr : v)
          // {
          //   cout << itr;
          // }
          // cout << "N=" << N << endl;
          // cout << "before: x=" << x << endl;
          x = (x + 1) % N;
          // cout << "after: x=" << x << endl;
        }
        v[x] = true;
        last = x;

        // debug
        // for (auto itr : v)
        // {
        //   cout << itr;
        // }
        // cout << endl;
      }

      if (j + 1 == K)
      {
        cout << x << endl;
        break;
      }
    }
  }
  return 0;
}