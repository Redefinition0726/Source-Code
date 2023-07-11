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
const int inf = 0x3f3f3f3f;
ll ans;
ll a, b, p;
int main()
{
    scanf("%lld%lld%lld", &a, &b, &p);
    printf("%lld^%lld mod %lld=", a, b, p);
    ans = 1;
    for (; b != 0;)
    {
        if (b & 1)
        {
            ans = (ans * a) % p;
        }
        a = (a * a) % p;
        b >>= 1;
    }
    printf("%lld\n", ans);
    return 0;
}