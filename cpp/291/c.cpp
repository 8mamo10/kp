#include <bits/stdc++.h>
using namespace std;

void dump(vector<int> v)
{
  for (auto itr : v)
  {
    cout << itr << " ";
  }
  cout << endl;
}

int main()
{
  int N;
  cin >> N;
  string S;
  cin >> S;

  map<pair<int, int>, bool> m;
  pair<int, int> current = make_pair(0, 0);
  m[current] = true;
  for (int i = 0; i < N; i++)
  {
    // cout << "current=(" << current.first << "," << current.second << ")" << endl;

    int c = S[i];
    pair<int, int> next;
    if (c == 'R')
    {
      next = make_pair(current.first + 1, current.second);
    }
    else if (c == 'L')
    {
      next = make_pair(current.first - 1, current.second);
    }
    else if (c == 'U')
    {
      next = make_pair(current.first, current.second + 1);
    }
    else if (c == 'D')
    {
      next = make_pair(current.first, current.second - 1);
    }
    // cout << "next=(" << next.first << "," << next.second << ")" << endl;

    if (m[next])
    {
      cout << "Yes" << endl;
      return 0;
    }
    m[next] = true;
    current = next;
  }
  cout << "No" << endl;
  return 0;
}