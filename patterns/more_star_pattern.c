#include <stdio.h>
int main()
{
    int n;
    printf("Enter n");
    scanf("%d", &n);
    int i = 1;
    while (i <= n)
    {
        //code to print space
        int space = n-i;
        while (space)
        {
            printf(" ");
            space--;
        }
        
        int j = 1;
        while (j <= i)
        {
            printf("* ");
            j++;
        }
        printf("\n");

        i++;
    }


    printf("\n\n\n");


    i =1;
    while (i <= n)
    {
        //code to print space
        int space = n-i;
        while (space)
        {
            printf(" ");
            space--;
        }
        
        int j = 1;
        while (j <= n)
        {
            printf("* ");
            j++;
        }
        printf("\n");

        i++;
    }



    printf("\n\n\n");


    i =1;
    while (i <= n)
    {
        //code to print space
        int space = n-i;
        while (space)
        {
            printf(" ");
            space--;
        }
        
        int j = 1;
        while (j <= i)
        {
            printf("*");
            j++;
        }
        printf("\n");

        i++;
    }



    printf("\n\n\n");


    i =1;
    while (i <= n)
    {
        //code to print space
        int space = i-1;
        while (space)
        {
            printf(" ");
            space--;
        }
        
        int j = 1;
        while (j <= i)
        {
            printf("*");
            j++;
        }
        printf("\n");

        i++;
    }




    printf("\n\n\n");


    i =1;
    while (i <= n)
    {
        //code to print space
        int space = i-1;
        while (space)
        {
            printf(" ");
            space--;
        }
        
        int j = 1;
        while (j <= n)
        {
            printf("* ");
            j++;
        }
        printf("\n");

        i++;
    }


printf("\n\n\n");

    i =1;
    while (i <= n)
    {
        //code to print space
        int space = i-1;
        while (space)
        {
            printf(" ");
            space--;
        }
        
        int j = 1;
        while (j <= n-i+1)
        {
            printf("* ");
            j++;
        }
        printf("\n");

        i++;
    }



printf("\n\n\n");

    i =1;
    while (i <= n)
    {
        //code to print space
        int space = i-1;
        while (space)
        {
            printf(" ");
            space--;
        }
        
        int j = 1;
        while (j <= n-i+1)
        {
            printf("*");
            j++;
        }
        printf("\n");

        i++;
    }



printf("\n\n\n");

    i =1;
    while (i <= n)
    {
        //code to print space
        int space = n-i+1;
        while (space)
        {
            printf(" ");
            space--;
        }
        
        //code to print numbers
        int j = 1;
        while (j <= i)
        {
            printf("%d",j);
            j++;
        }

        int k = 1;

        while (k<i)
        {
            printf("%d",i-k);
            k++;
        }
        
        
        printf("\n");

        i++;
    }



    return 0;
}
