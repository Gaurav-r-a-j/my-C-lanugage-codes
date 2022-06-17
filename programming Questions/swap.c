#include <stdio.h>
#include <stdlib.h>
int main()
{
    //write a program to swap two number without using third variable
    int a,b;
    scanf("%d %d",&a,&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("Numbers after swappig ");
    printf("%d %d",a,b);
    
    return 0;
}
