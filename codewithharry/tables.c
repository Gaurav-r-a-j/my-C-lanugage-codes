#include <stdio.h>


int main()
{

   int number,i=1;

    printf("Enter a number:\t");
    scanf("%d", &number);
    // printf("The multiplication table of the number %d is:\n", &number);

    while(i<=10)
    {
        printf("%d x %d = %d\n",number,i,number*i);
        i++;
    }
    return 0;


}


