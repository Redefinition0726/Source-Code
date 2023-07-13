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
const int MaxN = 1e5 + 5;
const int MaxM = 1e2 + 5;
int t;
int n;
int p;
int mem[MaxM];
char cmd[MaxN];
void solve(int x)
{
    scanf("%s", cmd);
    n = strlen(cmd);
    p = 1;
    for (int i = 0; i < n; i++)
    {
        switch (cmd[i])
        {
        case '>':
            p++;
            if (p == 101)
            {
                p = 1;
            }
            break;
        case '<':
            p--;
            if (p == 0)
            {
                p = 100;
            }
            break;
        case '+':
            mem[p]++;
            if (mem[p] == 256)
            {
                mem[p] = 0;
            }
            break;
        case '-':
            mem[p]--;
            if (mem[p] == -1)
            {
                mem[p] = 255;
            }
            break;
        }
    }
    printf("Case %d:", x);
    for (int i = 1; i <= 100; i++)
    {
        printf(" %02X", mem[i]);
    }
    printf("\n");
}
int main()
{
    scanf("%d", &t);
    getchar();
    getchar();
    for (int i = 1; i <= t; i++)
    {
        solve(i);
    }
    return 0;
}