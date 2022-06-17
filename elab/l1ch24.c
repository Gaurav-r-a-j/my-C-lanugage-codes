// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int r, c,j,i;
//     int sum=0;
//     printf("Enter row");
//     scanf("%d", &r);
//     printf("Enter column");
//     scanf("%d", &c);
//     int arr[r][c];

//     for ( i = 0; i < r; i++)
//     {
//         for ( j = 0; j < c; j++)
//         {
//             printf("Enter element");
//             scanf("%d", &arr[i][j]);

//         }
//             printf("\n");
//     }
//     for ( i = 0; i < r; i++)
//     {
//         for ( j = 0; j < c; j++)
//         {
//             printf("%d ", arr[i][j]);
//             if (i== 0 || i == r-1 || j==0 || j==c-1)
//             {
//                 sum+= arr[i][j];
//             }

//         }
//             printf("\n");
//     }

//     // for (int i = 0; i < r; i++)
//     // {
//     //     for (int j = 0; j < c; j++)
//     //     {
//     //         if (i== 0 || i == r-1 || j==0 || j==c-1)
//     //         {
//     //             sum+= arr[i][j];
//     //         }
            
//     //     }
        
//     // }
//     printf("%d",sum);
    

// // for(int i -> n){
// //     for(int j -> m){
// //         if(i == 0 || i == n-1 || j == 0 || j == m-1) sum += a[i][j];
// //     }
// // }
    
    



//     return 0;
// }



// final submitted solution 

#include <stdio.h>
int main()
{
    int r,c,j,i;
    int sum=0;
    scanf("%d %d", &r,&c);
    int arr[r][c];

    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);

        }
    }
    for ( i = 0; i < r; i++)
    {
        for ( j = 0; j < c; j++)
        {
            // printf("%d ", arr[i][j]);
            if (i== 0 || i == r-1 || j==0 || j==c-1)
            {
                sum+= arr[i][j];
            }

        }
            printf("\n");
    }

   
    printf("%d",sum);
    

    
    



    return 0;
}