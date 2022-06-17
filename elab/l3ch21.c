#include <stdio.h>
int main()
{
    int n, i = 0, k, sum, v1 = 0, v2 = 0, z;
    scanf("%d", &n);
    int a[n];
    for (k = 0; k < n; k++)
    {
        scanf("%d", &a[k]);
        for (i = k - 1; i >= 0; i--)
        {
            if (a[i] == a[k])
            {
                z = a[i];
                if (a[i] > v1)
                {
                    v2 = v1;
                    v1 = a[i];
                }
                else if (z > v2)
                    v2 = z;
                a[i] = 0;
                a[k] = 0;
            }
        }
    }
    sum = v1 * v2;
    (sum != 0) ? printf("%d", sum) : printf("-1");
    return 0;
}













// #include <stdio.h>
// int main()
// {int val=1;
//     int n,i,j,k;
//     int arr[50];
//     scanf("%d",&n);

//     for ( i = 0; i < n; i++)
//     {
//         scanf("%d",&arr[i]);
//     }

//     for (j = 0; j < n; j++)
//     {
//         for ( k = j+1; k < n; k++)
//         {
//             if (arr[j]==arr[k]) 
//             {   

//                 val =arr[j]* val;

//             }
//         }
 
        
//     }
//     if (val != 0 && val>1)
//     {
//         printf("%d", val);
//     }
//     else if (val == 1)
//     {
//         printf("%d", -val);
//     }

   
    
    


// 	return 0;
// }



