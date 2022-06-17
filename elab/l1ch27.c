#include <stdio.h>
int main()
{
    int competition[100002];
    int n;
    scanf("%d", &n);
    int i, sum;
    for (i = 0; i < n; i++)
        scanf("%d", &competition[i]);
    for (i = 0; i < n; i++)
    {
        sum = competition[i] + competition[i + 1];
        printf("%d ", sum);
    }
    return 0;
}