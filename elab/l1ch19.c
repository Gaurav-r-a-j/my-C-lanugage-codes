// #include <stdio.h>
// int main()
// {
//     int x1, x2, v1, v2;
//     scanf("%d %d %d %d", &x1, &x2, &v1, &v2);
//     if ((x2 - x1 + v2 - v1) % (v1 - v2) != 0)
//     {
//         printf("YES");
//     }
//     else
//     {
//         printf("NO");
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    if (n % 2 != 0 && m % 2 != 0)
        printf("NO");
    else
        printf("YES");
    return 0;
}
