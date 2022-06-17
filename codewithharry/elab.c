#include <stdio.h>
int main()
{
    int noofrows;
    printf("Enter a number: ");
    scanf("%d",&noofrows);
    
    for (int i = 1; i <= noofrows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ",i);
        }
        
        printf("\n");
    }
    

    return 0;
}
