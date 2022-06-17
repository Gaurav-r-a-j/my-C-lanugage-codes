#include <stdio.h>

int main()
{
    int t, n, b, i = 0 ,sum=0;
    printf("enter no. of taste case: ");
    scanf("%d", &t);
    while (i < t)
    {
        printf("Enter size and budget\n ");
        scanf("%d %d", &n, &b);
        int a[n];
        for (int j = 0; j < n; j++)
        {
            printf("Enter array:\n");
            scanf("%d", &a[j]);
            sum += a[j];
        }
        printf("%d\n",sum);
        if (sum>b)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        
        sum= 0;

        i++;
    }

    return 0;
}
// 2
// 4 7
// 6 4
// 3 7 5 9
// 11 13 16 19 21 15

// 2
// 2 5
// 4 2
// 4 15
// 4 3 5 2