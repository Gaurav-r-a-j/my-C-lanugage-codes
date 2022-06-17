#include <stdio.h>
#include <stdlib.h>
int main()
{
    int t, n, m, i = 0, j, k;
    printf("enter t:");
    scanf("%d", &t);
    while (i < t)
    {
        printf("enter n and m\n");
        scanf("%d %d", &n, &m);
        int a[n], b[m];
        for (j = 0; j < n; j++)
        {
            printf("array1\n");
            scanf("%d", &a[j]);
        }

        for (int pk = 0; pk < n; pk++)
        {
            printf("%d ", a[pk]);
        }

        for (k = 0; k < m; k++)
        {
            printf("array2\n");

            scanf("%d", &b[k]);
        }

        for (int tk = 0; tk < m; tk++)
        {

            printf("%d ", b[tk]);
        }

        printf("\n");

        for (int l = 0; l < n; l++)
        {
            for (int d = 0; d < m; d++)
            {
                if (a[l] == b[d])
                {
                    printf("%d ", a[l]);
                }

            }
        }

        i++;
    }

    return 0;
}

// 1 6 5 87 67 34 90 39 76 90 75 76 87 34