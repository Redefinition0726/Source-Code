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
const int MaxM = 2e5 + 5;
int n, m;
int start;
bool f[MaxN];
int x, y, len;
int answer[MaxN];
std::vector<int> link[MaxN];
void dijkstra(int x, int len)
{
    std::queue<int> bfs;
    if (f[x])
    {
        return;
    }
    f[x] = true;
    for (int i = 0; i < link[x].size(); i++)
    {
        int to = link[x][i];
        if (!f[to])
        {
            answer[i] = link[x][i];
            bfs.push(link[x][i]);
        }
    }
}
int main()
{
    scanf("%d%d%d", &n, &m, &start);
    for (int i = 1; i <= m; i++)
    {
        scanf("%d%d%d", &x, &y, &len);
        link[x].push_back(len);
        link[y].push_back(len);
    }
    dijkstra(start, 0);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", answer[i]);
    }
    printf("\n");
    return 0;
}