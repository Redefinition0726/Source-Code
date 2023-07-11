#include <bits/stdc++.h>
using namespace std;
long long n;
int main()
{
    scanf("%lld", &n);
    for (long long i = 1;; i++)
    {
        if (i * i <= n)
        {
            printf("%lld ", i * i);
        }
        else
        {
            break;
        }
    }
    return 0;
}