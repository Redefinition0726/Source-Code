#include <bits/stdc++.h>
using namespace std;
long long t;
long long n, k;
long long cycle;
int main()
{
    scanf("%lld", &t);
    for (long long i = 1; i <= t; i++)
    {
        scanf("%lld%lld", &n, &k);
        if (n % 2 == 0)
        {
            printf("%lld\n", (k - 1) % n + 1);
        }
        else
        {
            cycle = (n - 1) / 2;
            printf("%lld\n", ((k + (k - 1) / cycle) - 1) % n + 1);
        }
    }
    return 0;
}