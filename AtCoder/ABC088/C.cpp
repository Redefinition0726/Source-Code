#include <bits/stdc++.h>
using namespace std;
const int N = 5;
const int M = 100;
int p[N][N];
int main()
{
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            scanf("%d", &p[i][j]);
        }
    }
    for (int i1 = -M; i1 <= M; i1++)
    {
        for (int i2 = -M; i2 <= M; i2++)
        {
            for (int i3 = -M; i3 <= M; i3++)
            {
                int a[N], b[N];
                a[1] = i1;
                a[2] = i2;
                a[3] = i3;
                b[1] = p[1][1] - a[1];
                b[2] = p[2][2] - a[2];
                b[3] = p[3][3] - a[3];
                bool f;
                f = true;
                for (int i = 1; i <= 3; i++)
                {
                    for (int j = 1; j <= 3; j++)
                    {
                        if (a[i] + b[j] != p[i][j])
                        {
                            f = false;
                        }
                    }
                }
                if (f)
                {
                    printf("Yes\n");
                    return 0;
                }
            }
        }
    }
    printf("No\n");
    return 0;
}