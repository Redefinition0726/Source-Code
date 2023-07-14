#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iostream>
#include <map>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>
#define debug printf("Debug\n")
typedef long long ll;
const ll inf = 0x3f3f3f3f;
const ll MaxN = 1e5 + 5;
ll n;
ll ans;
ll p[MaxN];
ll s[MaxN];
int main()
{
    scanf("%lld", &n);
    for (ll i = 1; i <= n + 1; i++)
    {
        scanf("%lld", &p[i]);
    }
    for (ll i = 1; i <= n; i++)
    {
        scanf("%lld", &s[i]);
    }
    for (ll i = 1; i <= n; i++)
    {
        if (s[i] >= p[i])
        {
            ans += p[i];
            s[i] -= p[i];
            p[i] = 0;
            if (s[i] >= p[i + 1])
            {

                ans += p[i + 1];
                s[i] -= p[i + 1];
                p[i + 1] = 0;
            }
            else
            {
                ans += s[i];
                p[i + 1] -= s[i];
                s[i] = 0;
            }
        }
        else
        {
            ans += s[i];
            p[i] -= s[i];
            s[i] = 0;
        }
    }
    printf("%lld\n", ans);
    return 0;
}