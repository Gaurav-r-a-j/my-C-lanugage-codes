#include <stdio.h>

int sum(int n){
    int s;
    if (n==1)
    {
        return(n);
    }
    s = n + sum(n-1);
    return(s);
    
}


int main()
{
    int k;
    k = sum(3);
    printf("%d",k);
    
    return 0;
}
