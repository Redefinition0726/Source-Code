#include <bits/stdc++.h>
const int MaxN = 1e2 + 5;
int t;
int n;
int c[MaxN], p[MaxN];
void solve()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d%d", &c[i], &p[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        if (c[i] < c[i - 1] || p[i] < p[i - 1] || c[i] < p[i] || c[i] - c[i - 1] < p[i] - p[i - 1])
        {
            printf("NO\n");
            return;
        }
    }
    printf("YES\n");
}
int main()
{
    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        solve();
    }
    return 0;
}