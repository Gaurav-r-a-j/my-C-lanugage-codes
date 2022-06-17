#include <stdio.h>
#include <stdlib.h>
int main()
{
    ////write a program to check even or odd number without using % operator-->
    int a;
    printf("Enter the no. you want to check for odd or even: ");
    scanf("%d",&a);

//here we used the concept of binary as we know that the binary form of even number have their unit digit as 0 whether for odd its 1.
//so we apply bitwise operator between our number and 1
    if(a&1) printf("Odd number");
    else printf("Even number");
    return 0;
}
