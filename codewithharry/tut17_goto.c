#include<stdio.h>

int main()
{

    // goto = simply means chale jao waha jaha bhi bataya jaaye sab kuch chor ke aage ka , mostly we avoid using of goto statement

    // label:
    // printf("We are inside labael\n");
    // goto end;
    // goto label;
    // end:
    // printf("We are at end");

    // lets see where we should use goto 
    int num;
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n",i);
        for (int j = 0; j < 8; j++)
        {
            printf("Enter the number. Enter 0 to exit\n");
            scanf("%d",&num);
            if (num==0)
            {   
                // break;// break statement only exit from previous for loop but if we want that it should break from all looop then we use goto
                goto end;
            }
            
        }
        
    }
    
    end:////this is how we can use goto but its prefer not to use goto it is used by fellow programmers


    return 0;

}