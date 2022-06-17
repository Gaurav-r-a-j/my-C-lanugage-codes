#include <stdio.h>
#include <stdlib.h>
int a = 5;
int main()
{
    {
    int a = 6;
    printf("%d\n",a);
    }

    printf("%d",a);
    return 0;
}
