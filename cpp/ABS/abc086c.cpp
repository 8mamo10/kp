#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> t(n + 1);
    vector<int> x(n + 1);
    vector<int> y(n + 1);
    t[0] = 0;
    x[0] = 0;
    y[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> t[i] >> x[i] >> y[i];
    }

    for (int i = 0; i < n; i++)
    {
        int dt = t[i + 1] - t[i];
        int x1 = x[i];
        int y1 = y[i];
        int x2 = x[i + 1];
        int y2 = y[i + 1];
        int dist = abs(x2 - x1) + abs(y2 - y1);
        if (dist > dt)
        {
            cout << "No" << endl;
            return 0;
        }
        if ((dt - dist) % 2 == 1)
        {
            cout << "No" << endl;
            return 0;
        }
    }
    cout << "Yes" << endl;
    return 0;
}