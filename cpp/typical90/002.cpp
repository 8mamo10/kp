#include <bits/stdc++.h>
using namespace std;

bool judge(string s)
{
    int count = 0;
    for (auto c : s)
    {
        if (c == '(')
        {
            count++;
        }
        else
        {
            count--;
        }
        if (count < 0)
        {
            return false;
        }
    }
    if (count != 0)
    {
        return false;
    }
    return true;
}

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < (1 << N); i++)
    {
        string candidate = "";
        for (int j = N - 1; j >= 0; j--)
        {
            if ((i & (1 << j)) == 0)
            {
                candidate += "(";
            }
            else
            {
                candidate += ")";
            }
        }
        if (judge(candidate))
        {
            cout << candidate << endl;
        }
    }
    return 0;
}