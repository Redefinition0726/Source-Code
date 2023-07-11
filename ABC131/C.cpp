#include <bits/stdc++.h>
using namespace std;
long long a, b;
long long c, d;
int main()
{
    scanf("%lld%lld%lld%lld", &a, &b, &c, &d);
    a--;
    printf("%lld\n", b - a - b / c + a / c - b / d + a / d + b / (c * d / __gcd(c, d)) - a / (c * d / __gcd(c, d)));
    return 0;
}