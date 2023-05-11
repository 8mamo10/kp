#include <bits/stdc++.h>
using namespace std;

int main()
{
  int H, W;
  cin >> H >> W;
  vector<string> S(H);
  for (int i = 0; i < H; i++)
  {
    cin >> S[i];
  }

  for (int i = 0; i < H; i++)
  {
    string line = S[i];
    size_t index = line.find("TT");
    while (index != string::npos)
    {
      line[index] = 'P';
      line[index + 1] = 'C';
      index = line.find("TT");
    }
    cout << line << endl;
  }
  return 0;
}