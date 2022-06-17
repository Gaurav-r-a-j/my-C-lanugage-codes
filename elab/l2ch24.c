
#include <stdio.h>
int main()
{
    int t, n, m, i;
    scanf("%d\n%d %d", &t, &n, &m);
    int a[m], set = 0;
    while (t--)
    {
        for (i = 0; i < m; i++)
        {
            scanf("%d", &a[i]);
        }
        if (m % 2 == 0)
            set = 1;
        else
            set = 2;
    }
    printf("%d", set);
    return 0;
}