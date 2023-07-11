#include <bits/stdc++.h>
using namespace std;
int n;
int x;
int sum;
double t;
double health;
int main()
{
    scanf("%d", &n);
    health = 10;
    for (int i = 1; i <= n; i++)
    {
        scanf("%f%d", &t, &x);
        health = min(health - t, 10.0);
        if (health > 0)
        {
            sum += x;
        }
        else
        {
            break;
        }
    }
    printf("%d %d\n", log(sum + 1) / log(2), sum + 1 - pow(2, floor(log(sum + 1) / log(2))));
    return 0;
}