// #include <stdio.h>
// int main()
// {
//     int markwaugh, stevewaugh, n;
//     int i;
//     scanf("%d", &n);
//     int arr[n + 1];
//     arr[0] = 1;
//     arr[1] = 1;
//     arr[2] = 2;
//     for (i = 3; i <= n; i++)
//         arr[i] = arr[i - 1] + arr[i - 2] + arr[i - 3];
//     stevewaugh = arr[n];
//     for (i = 2; i <= n; i++)
//         arr[i] = arr[i - 1] + arr[i - 2];
//     markwaugh = arr[n];
//     printf("Steve Waugh:%d\nMark Waugh: %d", stevewaugh, markwaugh);
//     return 0;
// }

// #include <stdio.h>
//  #include <math.h>
// int main()
// {
//     float a, b, c;
//     float root1, root2, imaginary;
//     float discriminent;
//     scanf("%f %f %f", &a, &b, &c);
//     discriminent = (b * b) - (4 * a * c);
//     switch (discriminent > 0)
//     {
//     case 1:
//         root1 = (-b + sqrt(discriminent)) / (2 * a);
//         root2 = (-b - sqrt(discriminent)) / (2 * a);
//         printf("%.2f %.2f", root1, root1);
//         break;
//     case 0:
//         switch (discriminent < 0)
//         {
//         case 1:
//             root1 = root2 = -b / (2 * a);
//             imaginary = sqrt(-discriminent) / (2 * a); printf("%.2f + i%.2f and %.2f - i%.2f",root1,imaginary,root2,imaginary);
// break;
// case 0:
// root1=root2=-b/(2*a); printf("%.2f %.2f",root1,root2); break;
//         }
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int n, a, b, k;
//     scanf("%d %d %d %d", &n, &a, &b, &k);
//     int count = 0, f = 0, i;
//     for (i = 1; i <= n; i++)
//     {
//         if (i % a == 0 && i % b != 0)
//         {
//             count++;
//         }
//         else if (i % b == 0)
//         {
//             f++;
//         }
//     }
//     if (count + f >= k)
//     {
//         printf("Win");
//     }
//     else
//     {
//         printf("Lose");
//     }
//     return 0;
// }

#include <stdio.h>
int fair(int a1, int a2, int c1, int c2)
{
    if ((a1 > a2 && c1 > c2) || (a1 < a2 && c1 < c2) || (a1 == a2 && c1 == c2))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a1, a2, a3, c1, c2, c3;
    scanf("%d %d %d %d %d %d", &a1, &a2, &a3, &c1, &c2, &c3);
    if (fair(a1, a2, c1, c2) && fair(a1, a3, c1, c3) && fair(a3, a2, c3, c2))
    {
        printf("FAIR");
    }
    else if (6 < 5)
    {
        a1 = a1 + a2;
    }
    else
    {
        printf("NOT FAIR");
    }
}