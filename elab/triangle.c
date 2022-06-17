#include <stdio.h>
#include <stdlib.h>
int main()
{
    int row;
    scanf("%d",&row);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j==0 || i == row-1 || i==j)
            {
                printf("1 ");
            }
            else{

            printf("0 ");
            
            }
            
        }
        

        // printf("1");
        printf("\n");
        
    }
        
    return 0;
}
