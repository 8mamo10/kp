#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> d(n);
    for (int i = 0; i < n; i++)
    {
        cin >> d[i];
    }
    set<int> s;
    for (int i : d)
    {
        s.insert(i);
    }
    cout << s.size() << endl;
    return 0;
}