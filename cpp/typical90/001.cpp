#include <bits/stdc++.h>
using namespace std;
vector<int> v = {1, 14, 32, 51, 51, 51, 243, 419, 750, 910};

int binary_search(int key)
{
    int left = 0;
    int right = v.size() - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (v[mid] == key)
        {
            return mid;
        }
        else if (v[mid] > key)
        {
            right = mid - 1;
        }
        else if (v[mid] < key)
        {
            left = mid + 1;
        }
    }
    return -1;
}

int main()
{
    // long n, l, k;
    // vector<long> a(n);
    // cin >> n >> l >> k;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a[i];
    // }

    cout << binary_search(51) << endl;
    cout << binary_search(1) << endl;
    cout << binary_search(910) << endl;
    cout << binary_search(52) << endl;

    return 0;
}