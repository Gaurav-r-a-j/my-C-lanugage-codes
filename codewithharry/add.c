#include<stdio.h> //This is a pre processor statement


int main()
{
    int a, b;
    printf("Enter number a\n"); // this is use to print anythig 
    scanf("%d", &a); // this is use to take input from user
    printf("Enter number b\n"); // &a - means address of a .
    scanf("%d", &b);
    printf("The sum is %d\n", a + b);

    return 0;
}

// when you run code using  gcc then it make a file of filename so if you want to give file name with your own then use ( gcc filename.c -0 wantedfilename.c)