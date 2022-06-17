#include <stdio.h>
#include <string.h>


int main()
{
    int i, l;
    char pali[500], copyofpali[500], ch[20];
    printf("Enter pali:");
    gets(pali);
    l = strlen(pali);
    // printf("%d",l);

    for (i = 0; i < l / 2; i++)
    {
        ch[i] = pali[i];
        pali[i] = pali[l - 1];
        pali[l - 1] = ch[i];
        // l--;
        // if (pali[i] == pali[l - 1])
        // {
        //     printf("String is palindrome\n");
        //     // ch[i] = pali[i];
        //     // pali[i] = pali[l - 1];
        //     // pali[l - 1] = ch[i];

        //     if (ch[i]=='.')
        //         {
        //             ch[i]=pali[l-1];
        //         }

        // }

        l--;
    }
    for (i = 0; i < l-1; i++)
    {
        if (pali[i] == pali[l - 1])
        {
            printf("String is palindrome\n");

            if (ch[i] == '.')
            {
                ch[i] = pali[l - 1];
            }
        }
    }

    // if (pali[i]=='.')
    //     {
    //         pali[i]=pali[l-1];
    //         printf("Done");
    //     }
    // for ( i = 0; i < l-1; i++)
    //         {
    //             if (pali[i]=='.')
    //             {
    //                 pali[i]=ch[i];
    //             }
    //             l--;

    //         }
    printf("%s", pali);

    return 0;
}
