#include <stdio.h>

void interchange(int *n1, int *n2){
    int t;
    t = *n1;
    *n1= *n2;
    *n2 = t;
}

int main()
{

    int num1,num2;
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Enter the second numbe: ");
    scanf("%d",&num2);
    printf("The first number is %d\n",num1);
    printf("The second number is %d\n",num2);
    interchange(&num1,&num2);
    printf("The first number is %d\n",num1);
    printf("The second number is %d\n",num2);

    
    return 0;
}
