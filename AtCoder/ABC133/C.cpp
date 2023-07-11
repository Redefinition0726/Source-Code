#include <bits/stdc++.h>
const long long inf = 0x3f3f3f3f;
long long l, r;
long long ans;
int main()
{
    scanf("%lld%lld", &l, &r);
    ans = inf;
    for (long long i = l; i <= r; i++)
    {
        for (long long j = i + 1; j <= r; j++)
        {
            ans = std::min(ans, (i * j) % 2019);
            if (ans == 0)
            {
                break;
            }
        }
        if (ans == 0)
        {
            break;
        }
    }
    printf("%lld\n", ans);
    return 0;
}