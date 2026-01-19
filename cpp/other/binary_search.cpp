#include <bits/stdc++.h>
using namespace std;

int main()
{
    int left = 20, right = 36;

    while (right - left > 1)
    {
        int mid = left + (right - left) / 2;
        cout << "Is the age same or more than " << mid << " ? (yes / no)" << endl;
        string ans;
        cin >> ans;

        if (ans == "yes")
        {
            left = mid;
        }
        else
        {
            right = mid;
        }
    }
    cout << "The age is " << left << endl;
    return 0;
}