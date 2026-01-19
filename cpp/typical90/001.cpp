#include <bits/stdc++.h>
using namespace std;

long N, L, K;
long A[100005];

bool solve(long m)
{
    long count = 0;
    long pre = 0;
    for (int i = 1; i <= N; i++)
    {
        if (A[i] - pre >= m && L - A[i] >= m)
        {
            count++;
            pre = A[i];
        }
    }
    if (count >= K)
    {
        return true;
    }
    return false;
}

int main()
{
    cin >> N >> L >> K;
    for (int i = 1; i <= N; i++)
    {
        cin >> A[i];
    }

    long left = -1;
    long right = L + 1;

    while (right - left > 1)
    {
        long mid = left + (right - left) / 2;
        if (solve(mid) == false)
        {
            right = mid;
        }
        else
        {
            left = mid;
        }
    }
    cout << left << endl;
    return 0;
}