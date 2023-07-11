#include <bits/stdc++.h>
using namespace std;
long long x, y;
long long ans;
int main()
{
    scanf("%lld%lld", &x, &y);
    for (;;)
    {
        if (x > y)
        {
            break;
        }
        ans++;
        x *= 2;
    }
    printf("%lld\n", ans);
    return 0;
}