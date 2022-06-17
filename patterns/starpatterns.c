#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter n");
    scanf("%d", &n);
    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            printf("* ");
            j++;
        }
        printf("\n");

        i++;
    }

    printf("\n\n\n");
    i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            printf("%d ", i);
            j++;
        }
        printf("\n");

        i++;
    }

    printf("\n\n\n");
    int count = 1;
    i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            printf("%d ", count);
            j++;
            count++;
        }
        printf("\n");

        i++;
    }

    printf("\n\n\n");
    i = 1;
    while (i <= n)
    {
        int value = i;
        int j = 1;
        while (j <= i)
        {
            printf("%d ", value);
            j++;
            value++;
        }
        printf("\n");

        i++;
    }

    // m-2 for upper question
    printf("\n\n\n");
    i = 1;
    while (i <= n)
    {
        // int value = i;
        int j = 0;
        while (j <i)
        {
            printf("%d ", i + j);
            j++;
            // i++;
        }
        printf("\n");

        i++;
    }


    printf("\n\n\n");
    i = 1;
    while (i <= n)
    {
        // int value = i;
        int j = 0;
        while (j <i)
        {
            printf("%d ", i -j);
            j++;
        }
        printf("\n");

        i++;
    }



    printf("\n\n\n");
    i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <=n)
        {
            char ch = 'A'+ i -1;
            printf("%c ",ch);
            j++;
        }
        printf("\n");

        i++;
    }


    printf("\n\n\n");
    i = 1;
    while (i <= n)
    {
        int j = 0;
        while (j <n)
        {
            char ch = 'A'+ j;
            printf("%c ",ch);
            j++;
        }
        printf("\n");

        i++;
    }

    printf("\n\n\n");
    i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <=n)
        {
            char ch = 'A'+ i+j-2 ;
            printf("%c ",ch);
            j++;
        }
        printf("\n");

        i++;
    }

    //    printf("\n\n\n");
    // i = 1;
    // while (i <= n)
    // {
    //     // int value = i;
    //     int j = 1;
    //     while (j <= i)
    //     {
    //         printf("%d ", j);
    //         j++;
    //     }
    //     printf("\n");

    //     i++;
// }

return 0;
}
