#include <bits/stdc++.h>
using namespace std;
const long long MaxN = 1e5 + 5;
long long n, k;
long long to;
long long ans;
long long p[MaxN];
long long sum[MaxN];
int main()
{
    scanf("%lld%lld", &n, &k);
    for (long long i = 1; i <= n; i++)
    {
        scanf("%lld", &p[i]);
        sum[i] = sum[i - 1] + p[i];
    }
    for (long long i = 1; i <= n; i++)
    {
        for (; sum[to] - sum[i - 1] < k && to <= n;)
        {
            to++;
        }
        ans += n - to + 1;
    }
    printf("%lld\n", ans);
    return 0;
}