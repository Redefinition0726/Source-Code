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
template <typename T> struct LineTree
{
    std::map<T, T> tree;
    std::map<T, T> lazy;

    void _Build(const T p[], T l, T r, T num)
    {
        if (l == r)
        {
            tree[num] = p[l];
            return;
        }
        T mid = l + ((r - l) >> 1);
        _Build(p, l, mid, num * 2);
        _Build(p, mid + 1, r, num * 2 + 1);
        tree[num] = tree[num * 2] + tree[num * 2 + 1];
    }

    T _Sum(T l, T r, T s, T t, T p)
    {
        if (l <= s && t <= r)
        {
            return tree[p];
        }
        T sum, m;
        sum = 0;
        m = s + ((t - s) >> 1);
        if (l <= m)
        {
            sum += _Sum(l, r, s, m, p * 2);
        }
        if (r > m)
        {
            sum += _Sum(l, r, m + 1, t, p * 2 + 1);
        }
        return sum;
    }

    void _Add(T l, T r, T c, T s, T t, T p)
    {
        if (l <= s && t <= r)
        {
            tree[p] += (t - s + 1) * c;
            lazy[p] += c;
            return;
        }
        T m = s + ((t - s) >> 1);
        if (lazy[p] && s != t)
        {
            tree[p * 2] += lazy[p] * (m - s + 1);
            tree[p * 2 + 1] += lazy[p] * (t - m);
            lazy[p * 2] += lazy[p];
            lazy[p * 2 + 1] += lazy[p];
            lazy[p] = 0;
        }
        if (l <= m)
        {
            _Add(l, r, c, s, m, p * 2);
        }
        if (r > m)
        {
            _Add(l, r, c, m + 1, t, p * 2 + 1);
        }
        tree[p] = tree[p * 2] + tree[p * 2 + 1];
    }

    void Build(const T p[], const T l, const T r)
    {
        _Build(p, l, r, 1);
    }

    T Sum(const T l, const T r)
    {
        return _Sum(l, r, l, r, 1);
    }

    void Add(const T l, const T r, const T c)
    {
        _Add(l, r, c, l, r, 1);
    }

    LineTree()
    {
    }
};
const ll MaxN = 1e5 + 5;
ll op;
ll n, m;
ll x, y, z;
ll p[MaxN];
LineTree<ll> t;
int main()
{
    scanf("%lld%lld", &n, &m);
    for (ll i = 1; i <= n; i++)
    {
        scanf("%lld", &p[i]);
    }
    t.Build(p, 1, n);
    for (ll i = 1; i <= m; i++)
    {
        scanf("%lld", &op);
        if (op == 1)
        {
            scanf("%lld%lld%lld", &x, &y, &z);
            t.Add(x, y, z);
        }
        else
        {
            scanf("%lld%lld", &x, &y);
            printf("%lld\n", t.Sum(x, y));
        }
    }
    return 0;
}