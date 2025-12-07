#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    while (s.length() >= 5)
    {
        string postfix = "";
        postfix = s.substr(s.length() - 5, 5);
        if (postfix == "dream" || postfix == "erase")
        {
            s.erase(s.length() - 5, 5);
            continue;
        }
        postfix = s.substr(s.length() - 6, 6);
        if (postfix == "eraser")
        {
            s.erase(s.length() - 6, 6);
            continue;
        }
        postfix = s.substr(s.length() - 7, 7);
        if (postfix == "dreamer")
        {
            s.erase(s.length() - 7, 7);
            continue;
        }
        break;
    }
    if (s.length() == 0)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}