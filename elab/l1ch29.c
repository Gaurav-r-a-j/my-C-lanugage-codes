#include <stdio.h>
int main()
{int rot[100000];
int t,n,k,i,j,l,r,temp,p;
scanf("%d",&t);

for (i=0; i<t;i++) {
    scanf("%d %d",&n,&k);
    
    for(j=0;j<n;j++){
        scanf("%d ",&rot[j]);
    }
    
    for(r=0;r<k;r++){
        temp = rot[n-1];
        for(l=n-1;l>=1;l--){
            rot[l]=rot[l-1];
        }
        rot[l]= temp;
    }
    
    for(p=0;p<n;p++){
        printf("%d ",rot[p]);
    }
    printf("\n");
}

	return 0;
}





// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int rot[10000], i , n , k , j ,l, temp;
//     printf("enter size of array n");
//     scanf("%d",&n);

//     for(i=0 ; i<n ; i++){
//         scanf("%d",&rot[i]);
//     }
//     printf("enter the rotation number");
//     scanf("%d",&k);


// for (int s = 0; s < k; s++)
// {
//     /* code */


//     temp = rot[n-1];
//     for (l = n-1; l >=1; l--)
//     {
//         rot[l]=rot[l-1];
//     }
//     rot[l] = temp;
// }

//     for (int m = 0; m < n; m++)
//     {
//         printf("%d",rot[m]);
//     }
       

//     return 0;
// }














// #include <stdio.h>
// int main()
// {int rot[100000];
// int t,n,k,i,j,l,r,temp,p;
// scanf("%d",&t);

// for (i=0; i<t;i++) {
//     scanf("%d %d",&n,&k);
    
//     for(j=0;j<n;j++){
//         scanf("%d",&rot[j]);
//     }
    
//     for(r=0;r<k;r++){
//         temp = rot[n-1];
//         for(l=n-1;l>=1;l--){
//             rot[l]=rot[l-1];
//         }
//         rot[l]= temp;
//     }
    
//     for(p=0;p<n;p++){
//         printf("%d",rot[p]);
//     }
// }

// 	return 0;
// }