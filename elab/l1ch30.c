
// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int T, N, C, Ak, i, j,a;
//     int wanted = 0;
//     // printf("Enter n0. of test cases:");
//     scanf("%d", &T);

//     for (i = 0; i < T; i++)
//     {
//         // printf("Enter No of lions");
//         scanf("%d %d", &N, &C);
//         // printf("Enter Candies:");
//         // scanf("%d",&C);
//         for (j = 0; j < N; j++)
//         {
//             // printf("Enter Ak candies");
//             scanf("%d", &Ak);
//             wanted += Ak;
//         }
//         if (wanted <= C)
//         {
//             printf("Yes");
//         }
//         else
//         {
//             printf("No");
//         }

//         printf("Candies lions want");
//     }

//     return 0;
// }

#include <stdio.h> 
int main(void)
{
    int T, N, C;
    int a;
    scanf("%d", &T);
    while (T--)
    {
        int i;
        scanf("%d %d", &N, &C);
        for (i = 0; i < N; i++)
        {
            scanf("%d", &a);
            C -= a;
        }
        if (C >= 0)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}










#include <stdio.h>
int main()
{int T,N,C; int Ak,i,j,wanted=0;

    scanf("%d",&T);
    for ( i = 0; i < T; i++)
    {
        scanf("%d %d",&N,&C);
        for (j = 0; j < N; j++) { scanf("%d",&Ak);
            wanted+=Ak; }
        wanted<=C?printf("Yes\n"):printf("No\n");
    
    }
    
    return 0;
}