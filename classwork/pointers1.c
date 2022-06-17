#include <stdio.h>

int main()
{
    int a;
    int *iptr;
    char ch;
    char *cptr;
    printf("Enter a number you want: ");
    scanf("%d",&a);
    printf("Enter a character you want: ");
    scanf("%c",&ch);
    iptr = &a;
    cptr=&ch;
    printf("The address of the variable a is %d \n ", iptr);
    printf("The value of the variable a using pointer is %d \n", *iptr);
    printf("The address of the variable ch is %d \n ", cptr);
    printf("The value of the variable ch using pointer is %c \n", *iptr);
    return 0;
}
