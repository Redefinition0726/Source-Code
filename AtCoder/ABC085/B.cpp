#include <bits/stdc++.h>
using namespace std;
const int N = 1e2 + 5;
int n;
int x;
int ans;
int p[N];
int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        p[x] = 1;
    }
    for (int i = 1; i <= 100; i++)
    {
        if (p[i])
        {
            ans++;
        }
    }
    printf("%d\n", ans);
    return 0;
}