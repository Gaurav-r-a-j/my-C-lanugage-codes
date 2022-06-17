#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, i = 0;
    int *i2;
    while (i < 45555)
    {
        printf("Welcome to code with harry");
        i2 = malloc(34444 * sizeof(int));

        if (i % 100 == 0)
        {
            getchar();
        }
        i++;
        free(i2);// if we don't use this then the case if of memory leak
    }

    return 0;
}
