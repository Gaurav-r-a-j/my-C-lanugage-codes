#include<stdio.h>

int main(){
    float p,r,t,si;
    printf("Enter principal amount: ");
    scanf("%f",&p);

    printf("Enter rate of intrest: ");
    scanf("%f",&r);

    printf("Enter time period: ");
    scanf("%f",&t);

    si = p*r*t/100;
    printf("The simple intrest of given data if %f \n",si);
    

// }

float l,b,pm,ar;
    printf("Enter length: ");
    scanf("%f",&l);

    printf("Enter breadth: ");
    scanf("%f",&b);
    pm = 2*l+2*b;
    ar= l*b;
    printf("The perimeter of rectangle is: %f \n",pm);

    printf("The area of rectangle is: %f \n",ar);


float pi = 3.14;
float cr, arc , cc;
    printf("Enter radius of circle: ");
    scanf("%f",&cr);
    arc = pi*cr*cr;
    cc = 2*pi*cr;
    printf("Area of circle is: %f\n" ,arc);
    printf("Circumference  of circle is: %f\n", cc);


    

}