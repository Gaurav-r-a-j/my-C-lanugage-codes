#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main()
{
    int n;
    char s1[100],s2[100];
    gets(s1);
    // printf("Enter n: ");
    // scanf("%d",&n);
    // for (int i = 0; i < n; i++)
    // {
    //     printf("Enter strings:");

    //     scanf("%s", &s1[0][i]);

    //      scanf("%254[^\n]",s1);
    // }
    


    if (s1[0] >= 'a' && s1[0] <= 'z')
    {
        for (int i = 0; s1[i] != '\0'; i++)
        {
            if (s1[i] >= 'A' && s1[i] <= 'Z')
            {
                s1[i] = s1[i] + 32;
            }
        }
    }

    else if (s1[0] >= 'A' && s1[0] <= 'Z')
    {
        for (int i = 0; s1[i] != '\0'; i++)
        {

            if (s1[i] >= 'a' && s1[i] <= 'z')
            {
                s1[i] = s1[i] - 32;
            }
        }
    }
    printf("%s", s1);

    return 0;
}
