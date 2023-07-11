#include <bits/stdc++.h>
using namespace std;
const long long N = 3e5 + 5;
long long n;
long long dp[N][2];
long long x[N], y[N];
int main()
{
    scanf("%lld", &n);
    for (long long i = 1; i <= n; i++)
    {
        scanf("%lld%lld", &x[i], &y[i]);
    }
    for (long long i = 1; i <= n; i++)
    {
        if (x[i] == 0)
        {
            dp[i][0] = max(max(dp[i - 1][0], dp[i - 1][0] + y[i]), dp[i - 1][1] + y[i]);
            dp[i][1] = dp[i - 1][1];
        }
        else
        {
            dp[i][0] = dp[i - 1][0];
            dp[i][1] = max(dp[i - 1][1], dp[i - 1][0] + y[i]);
        }
    }
    printf("%lld\n", max(dp[n][0], dp[n][1]));
    return 0;
}