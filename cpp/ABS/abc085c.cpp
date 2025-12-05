#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long y;
    cin >> n >> y;

    for (int i = 0; i <= n; i++) // 10000
    {
        for (int j = 0; j <= n; j++) // 5000
        {
            for (int k = 0; k <= n; k++) // 1000
            {
                if (i + j + k > n)
                {
                    break;
                }
                if (i + j + k != n)
                {
                    continue;
                }
                if (10000 * i + 5000 * j + 1000 * k == y)
                {
                    printf("%d %d %d\n", i, j, k);
                    return 0;
                }
            }
        }
    }
    cout << "-1 -1 -1" << endl;
    return 0;
}