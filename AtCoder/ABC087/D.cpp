#include <bits/stdc++.h>
using namespace std;
const int inf;
const int N = 1e5 + 5;
struct person
{
    vector<int> go;
    vector<int> len;
};
int n, m;
int l, r, d;
int vis[N];
person p[N];
int main()
{
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= m; i++)
    {
        scanf("%d%d%d", &l, &r, &d);
        p[l].go.push_back(r);
        p[l].len.push_back(d);
    }
    for (int i = 1; i <= n; i++)
        return 0;
}