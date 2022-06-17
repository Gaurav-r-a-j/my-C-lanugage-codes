// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     int i, l;
//     char pali[500], copyofpali[500], ch;
//     printf("Enter pali:");
//     gets(pali);
//     l = strlen(pali);
//     // printf("%d",l);

//     for (i = 0; i < l / 2; i++)
//     {
//         ch = pali[i];
//         pali[i] = pali[l - 1];
//         pali[l - 1] = ch;
//         // l--;
//         // if (pali[i] == pali[l - 1])
//         // {
//         //     printf("String is palindrome\n");
//         //     // ch[i] = pali[i];
//         //     // pali[i] = pali[l - 1];
//         //     // pali[l - 1] = ch[i];

//         //     if (ch[i]=='.')
//         //         {
//         //             ch[i]=pali[l-1];
//         //         }

//         // }

//         l--;
//     }
//     for (i = 0; i < l-1; i++)
//     {
//         if (pali[i] == pali[l - 1])
//         {
//             printf("String is palindrome\n");

//             if (ch == '.')
//             {
//                 ch = pali[l - 1];
//             }
//         }
//     }

//     // if (pali[i]=='.')
//     //     {
//     //         pali[i]=pali[l-1];
//     //         printf("Done");
//     //     }
//     // for ( i = 0; i < l-1; i++)
//     //         {
//     //             if (pali[i]=='.')
//     //             {
//     //                 pali[i]=ch[i];
//     //             }
//     //             l--;

//     //         }
//     printf("%s", pali);

//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main()
{
    int t, i, l;
    char pali[500], copyofpali[500], ch;

    printf("Enter test cases");
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        printf("Enter pali:");
        scanf("%s", pali);
        for (int j = 0; j < t / 2; j++)
        {
            ch = pali[i];
            pali[i] = pali[l - 1];
            pali[l - 1] = ch;
        }
        printf("%s",pali);
    }

    // printf("%s",pali);
    // for (i = 0; i < t / 2; i++)
    // {
    //     ch = pali[i];
    //     pali[i] = pali[l - 1];
    //     pali[l - 1] = ch;
    // }
    //     printf("%s",pali);

    return 0;
}
