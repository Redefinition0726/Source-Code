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
struct str
{
    int x, y;
    int len;
};
int n, m;
int start;
int x, y, len;
int answer[MaxN];
std::vector<std::pair<int, int>> link[MaxN];
std::priority_queue<std::pair<int, int>> queue;
int main()
{
    scanf("%d%d%d", &n, &m, &start);
    for (int i = 1; i <= m; i++)
    {
        scanf("%d%d%d", &x, &y, &len);
        link[x].push_back(std::make_pair(y, len));
        link[y].push_back(std::make_pair(x, len));
    }
    memset(answer, 0x3f, sizeof(answer));
    queue.push(std::make_pair(0, start));
    for (; !queue.empty();)
    {
        std::pair<int, int> tmp;
        tmp = queue.top();
        queue.pop();
        for (int i = 0; i < link[tmp.second].size(); i++)
        {
            if (answer[tmp.second])
            {
                ;
            }
        }
    }
    return 0;
}