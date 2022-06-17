#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr[50],i,n,keyelement,found=0,count=0,index[50];
    printf("Enter the number of elements you want ");
    scanf("%d",&n);

    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the element you want to search ");
    scanf("%d",&keyelement);

    for ( i = 0; i < n; i++)
    {
        if(arr[i]==keyelement){
            found=1;
            index[count]=i;
            count++;
        }
    }

    if(found==1){
        printf("%d Element found at index\n",count);
        for ( i = 0; i < count; i++)
        {
            printf("%d ",index[i]);
        }
        
    }
    
    
    return 0;
}
