#include <stdio.h>
int main()
{
    int n;
    printf("Enter n");
    scanf("%d",&n);
    int i =0;
    while (i<n) 
    {
        int j=0;
        while (j<n)
        {
            printf("* ");
            j++;
        }
        printf("\n");
        
        
        i++;
    }
    
    
    return 0;
}
