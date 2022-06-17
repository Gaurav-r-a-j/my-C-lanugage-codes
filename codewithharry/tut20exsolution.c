#include <stdio.h>

int main()
{
    int num,mlt;
    printf("Enter the number you want the multiplication table of\n");
    scanf("%d", &num);

    printf("Multiplication table of %d is as follows:\n",num);

    for (int i = 1; i < 11; i++)
    {
        mlt = num *i;
        printf("%d * %d= %d\n",num,i,mlt);

    }
    

    return 0;


}














