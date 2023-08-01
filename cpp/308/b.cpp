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
  int N, M;
  cin >> N >> M;
  vector<string> C(N);
  for (int i = 0; i < N; i++)
  {
    cin >> C[i];
  }
  vector<string> D(M);
  for (int i = 0; i < M; i++)
  {
    cin >> D[i];
  }
  vector<int> P(M + 1);
  for (int i = 0; i < M + 1; i++)
  {
    cin >> P[i];
  }

  map<string, int> menu;
  for (int i = 0; i < M; i++)
  {
    string dish = D[i];
    int price = P[i + 1];
    menu[dish] = price;
  }

  int sum = 0;
  for (int i = 0; i < N; i++)
  {
    string color = C[i];
    int price = 0;
    if (menu.find(color) == menu.end())
    {
      price = P[0];
    }
    else
    {
      price = menu[color];
    }
    sum += price;
  }
  cout << sum << endl;
  return 0;
}