#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }
    int min = INT_MAX;

    for (int num : A)
    {
        int count = 0;
        while (num % 2 == 0)
        {
            count++;
            num /= 2;
        }
        min = count < min ? count : min;
    }
    cout << min << endl;
}
