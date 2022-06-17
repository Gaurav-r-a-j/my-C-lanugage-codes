/*
kms to miles
inches to foot
cms to inches 
pound to kgs 
inches to meters
 

*/

#include<stdio.h>

int main()
{
    char input;
    float kmtomiles=0.621371;
    float inchestofoot=0.0833333;
    float cmsToInches =0.393701;
    float poundToKgs=0.453592;
    float inchesToMeters=0.0254;
    float first, second;

    while(1)// it makes a infinite loop
    {
        printf("Enter the input character. q to quit \n        1.kms to miles\n        2.inches to foot\n        3.cms to inches \n        4.pound to kgs\n        5.inches to meter\n");

        scanf("%c",&input);


        // printf("Enter quantity in terms of first unit\n");
        // scanf("%.2f",&first);
        // printf("Enter quantity in terms of second unit\n");
        // scanf("%.2f",&second);

        switch (input)
        {
        case 'q':
        printf("Quitting the program...");
            goto end;
            break;

        case '1':
        printf("Enter quantity in terms of first unit\n");
        scanf("%f",&first);
        second = first*kmtomiles;
        printf("%.2f kms is equal to %.2f miles\n",first,second);
        break;

        case '2':
        printf("Enter quantity in terms of first unit\n");
        scanf("%f",&first);
        second = first*inchestofoot;
        printf("%.2f inches is equal to %.2f foot\n",first,second);
        break;

        case '3':
        printf("Enter quantity in terms of first unit\n");
        scanf("%f",&first);
        second = first*cmsToInches;
        printf("%.2f cms is equal to %.2f inches\n",first,second);
        break;

        case '4':
        printf("Enter quantity in terms of first unit\n");
        scanf("%f",&first);
        second = first*poundToKgs;
        printf("%.2f pounds is equal to %.2f kgs \n",first,second);
        break;

        case '5':
        printf("Enter quantity in terms of first unit\n");
        scanf("%f",&first);
        second = first*inchesToMeters;
        printf("%.2f inches is equal to %.2f meters \n",first,second);
        break;

        
        default:
            break;
        }

        
    }

    end:

    return 0;
}


