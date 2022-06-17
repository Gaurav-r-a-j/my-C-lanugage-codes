#include <stdio.h>
// #include<string.h>`
int main()
{
    char text[100], c;
    int i = 0;
    printf("Enter a line of your choice: ");
    c = getchar();//here one bug if user press enter first then our program will not run 

    while (c != '\n')
    {
        text[i] = c;
        // printf("%d", i);//just to check 
        // putchar(c);//just to check
        c = getchar();

        // printf("\n");
        i++;
    }

    // printf("%d",i);//just to check
    text[i] = '\0';
    printf("The line you entered is \n");
    for (int i = 0; text[i] != '\0'; i++)
    {
        putchar(text[i]);
    }
        // puts(text); do the same work as upper loop for printing the string

    return 0;
}
