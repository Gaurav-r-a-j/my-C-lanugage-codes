// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int t,i, j,N,sum=0;
//     scanf("%d %d", &t, &k);
//     for (i = 0; i < t; i++)
//     {
//         scanf("%d", &N);
//         int A[N];
//         for ( j = 0; j < N; j++)
//         {
//             scanf("%d",&A[j]);
//             sum = sum +A[j];

//         }
//         sum>k?printf("FAILURE"):printf("SUCCESS");
//         sum =0;

//     }

//     return 0;
// }

// #include <stdio.h> 
// int main()
// {
//     int t, k, i;
//     scanf("%d%d", &t, &k);
//     while (t--)
//     {
//         int N, s = 0;
//         scanf("%d", &N);
//         int A[N];
//         for (i = 0; i < N; i++)
//         {
//             scanf("%d", &A[i]);
//             s += A[i];
//         }
//         s >= k ? printf("FAILURE\n") : printf("SUCCESS\n");
//     }
//     return 0;
// }
// 3 7
// 2
// 4 4
// 5
// 1 8 6 4 5
// 1
// 6