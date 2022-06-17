#include <stdio.h>
int main()
{
    int t, n, x[100002], y[100002], i = 0, j = 0, sum = 0, l;
    scanf("%d", &t);
    while (i < t)
    {
        scanf("%d", &n);
        for (j = 0; j < n; j++)
        {
            scanf("%d", &x[j]);
        }
        for (l = 0; l < n; l++)
        {
            scanf("%d", &y[l]);
        }

        for (int k = 0; k < n; k++)
        {
            // sum = sum + y[k]+x[k+1];
            if (k % 2 == 0 || k == 0)
            {
                sum = sum + y[k];
            }
            else
            {
                sum = sum + x[k];
            }
        }
        printf("%d", sum);
        sum = 0;

        i++;
    }

    // printf("%d", sum);

    return 0;
}

// 1
// 3
// 2 1 2
// 3 2 1

// 1
// 4
// 4 2 4 6
// 6 1 3 9

#include <stdio.h>
int main()
{
    int t, n, x[100002], y[100002];
    scanf("%d", &t);
    scanf("%d", &n);
    int i, sum1 = 0, sum2 = 0;
    while (t--)
    {
        for (i = 0; i < n; i++)
        {
            scanf("%d", &x[i]);
        }
        for (i = 0; i < n; i++)
        {
            scanf("%d", &y[i]);
        }
        for (i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                sum1 += x[i];
                sum2 += y[i];
            }
            else
            {
                sum1 += y[i];
                sum2 += x[i];
            }
        }
        (sum1 < sum2) ? printf("%d", sum1) : printf("%d", sum2);
    }
    return 0;
}