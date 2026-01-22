#include <bits/stdc++.h>
using namespace std;

int N;
int A[500000];
int B[500000];

const int INF = (1 << 29);
vector<int> graph[500000];
int dist[500000];

void getdist(int start)
{
    for (int i = 1; i <= N; i++)
    {
        dist[i] = INF;
    }
    queue<int> q;
    q.push(start);
    dist[start] = 0;
    while (!q.empty())
    {
        int pos = q.front();
        q.pop();
        for (int to : graph[pos])
        {
            if (dist[to] == INF)
            {
                dist[to] = dist[pos] + 1;
                q.push(to);
            }
        }
    }
}

int main()
{
    cin >> N;
    for (int i = 1; i <= N - 1; i++)
    {
        cin >> A[i] >> B[i];
        graph[A[i]].push_back(B[i]);
        graph[B[i]].push_back(A[i]);
    }

    getdist(1);
    int maxn1 = -1, maxid1 = -1;
    for (int i = 1; i <= N; i++)
    {
        if (maxn1 < dist[i])
        {
            maxn1 = dist[i];
            maxid1 = i;
        }
    }

    getdist(maxid1);
    int maxn2 = -1;
    for (int i = 1; i <= N; i++)
    {
        maxn2 = max(maxn2, dist[i]);
    }
    cout << maxn2 + 1 << endl;
    return 0;
}