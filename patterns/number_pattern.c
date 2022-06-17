#include <stdio.h>
int main()
{
    int n;
    printf("Enter n");
    scanf("%d",&n);
    int i =1;
    while (i<=n) 
    {
        int j=1;
        while (j<=n)
        {
            printf("%d ",i);
            j++;

        }
        printf("\n");
        
        
        i++;
    }

printf("\n\n\n\n");
    i =1;
    while (i<=n) 
    {
        int j=1;
        while (j<=n)
        {
            printf("%d ",j);
            j++;

        }
        printf("\n");
        
        
        i++;
    }


printf("\n\n\n\n");
    i =1;
    while (i<=n) 
    {
        int j=1;
        while (j<=n)
        {
            printf("%d ",n-j+1);
            j++;

        }
        printf("\n");
        
        
        i++;
    }



printf("\n\n\n\n");
     int count =1;
    i =1;
    while (i<=n) 
    {
        int j=1;
        while (j<=n)
        {
            printf("%d ",count);
            j++;
            count++;

        }
        printf("\n");
        
        
        i++;
    }


    
    
    return 0;
}
