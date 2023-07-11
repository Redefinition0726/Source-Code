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
const int MaxN = 1e4 + 5;
const int MaxM = 1e4 + 5;
int n;
int answer;
char s[MaxM];
std::map<std::string, bool> map;
int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%s", s);
        std::string tmp(s);
        if (!map[tmp])
        {
            map[tmp] = true;
            answer++;
        }
    }
    printf("%d\n", answer);
    return 0;
}