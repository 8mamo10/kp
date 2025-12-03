#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int alice = 0;
    int bob = 0;
    for (int i = 0; i < n; i++)
    {
        vector<int>::iterator itr = max_element(a.begin(), a.end());
        if (i % 2 == 0)
        {
            alice += *itr;
        }
        else
        {
            bob += *itr;
        }
        a.erase(itr);
    }
    cout << alice - bob << endl;
    return 0;
}