#include <bits/stdc++.h>
using namespace std;

template <typename T>
void dump(vector<T> v)
{
  for (auto itr : v)
  {
    cout << itr << " ";
    // cout << "(" << itr.first << "," << itr.second << ")" << " ";
  }
  cout << endl;
}

int main()
{
  // vector<int> v1({1, 2, 3});
  // vector<string> v2({"aaa", "bbb", "ccc"});
  // dump(v1);
  // dump(v2);

  int N;
  cin >> N;
  vector<pair<int, int>> v(N);
  for (int i = 0; i < N; i++)
  {
    int A, B;
    cin >> A >> B;
    pair<int, int> p({A, B});
    v[i] = p;
  }
  return 0;
}