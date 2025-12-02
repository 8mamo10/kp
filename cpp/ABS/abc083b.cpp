#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a, b;
    cin >> n >> a >> b;

    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        int total = 0;
        int calc = i;
        while (calc > 0)
        {
            total += calc % 10;
            calc /= 10;
        }
        if (a <= total && total <= b)
        {
            ans += i;
        }
    }
    cout << ans << endl;
    return 0;
}