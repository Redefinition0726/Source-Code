#include <bits/stdc++.h>
using namespace std;
const int N = 1e2 + 5;
int n;
int p[N];
int first;
int second;
int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &p[i]);
    }
    sort(p + 1, p + 1 + n);
    for (int i = n; i >= 1; i--)
    {
        if ((n - i) % 2 == 0)
        {
            first += p[i];
        }
        else
        {
            second += p[i];
        }
    }
    printf("%d\n", first - second);
    return 0;
}