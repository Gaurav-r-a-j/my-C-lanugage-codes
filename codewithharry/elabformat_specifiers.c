#include <stdio.h>
#include <math.h>

// long Decimal_to_Octal(int number)
// %x is for hexa and %o for octal no.

// #define PI 3.14 // we don't use comma when writing any preproseccor command

int main()
{

    // int a=8;
    // const float b= 7.55;
    // // b= 5.7;// Cannot do this as it is constnt
    // // printf("The value of a is %d and The value of b is %2.4f \n", a , b);
    // // printf("The value of b is %2.4f \n",  b); // her 2.4f means that 2 is offset and 4 is no. of characters we want afer decimal value.
    // // PI= 55.54 // cannot do this as PI is a constant
    // printf("%f\n",PI);

    // These are some format specifirs
    // %c - char
    // %f - float
    // %d - Integer
    // %e - long
    // %lf - double
    // %Lf - long double

    // Constant - it cannot be changed ones defined  it is written with const keyword and one method is using hash define pre processor
    /*this is
    a
    multiline
    comment

    */

    // Escape sequence characted  written using backslash and taken as only one character ex - \t , \\ , \a- for alarm or beep , \b

    // float p,i,interest,amount;
    // int t;
    // scanf("%f %f %d",&p,&i,&t);
    // interest = p*i*t/100;
    // amount = p + interest;
    // printf("Interest after %d Years = $%.2f\n",t,interest);
    // printf("Total Amount after %d Years = $%.2f",t,amount);

    // int a,b,c,r;
    // float s,area;
    // scanf("%d %d %d",&a,&b,&c);
    // s = a+b+c/2;
    // r=(s-a)*(s-b)*(s-c);
    // area =sqrt(r);
    // printf("%.2f",area);

    // int a=36;
    // prinf("%d"sqrt(a));

    // int sec,h,m,s;
    // scanf("%d",&sec);
    // h = sec/3600;
    // m= sec%3600/60;
    // s= sec%60;
    // printf("%dH:%dM:%dS",h,m,s);

    // int prodid,billid,quantity;
    // float price,totprice;
    // scanf("%d",&billid);
    // scanf("%d",&prodid);
    // scanf("%f",&price);
    // scanf("%d",&quantity);
    // totprice = quantity*price;
    // printf("%.2f",totprice);

    // float tractLand,tractLandAcred;
    // scanf("%f",&tractLand);
    // tractLandAcred=tractLand/43560.04;
    // printf("%.2f sq.ft is equal to %.2f acres",tractLand,tractLandAcred);

    // int N,fp,sp,tp;
    // scanf("%d",&N);
    // fp = pow(N,1);
    // sp = pow(N,2);
    // tp = pow(N,3);
    // printf("%d %d %d",fp,sp,tp);

    // float spacenum;
    // int a;
    // scanf("%f",&spacenum);
    // a= (int)spacenum;
    // a = a%10;
    // printf("%d",a);

    // find area of triangle
    //  int a, b, c;
    //  float s,area;
    //      scanf("%d %d %d", &a, &b, &c);
    //      s = (a + b + c) / 2;
    //      area = s * (s - a) * (s - b) * (s - c);
    //      area = sqrt(area);
    //      printf("Area of a triangle = %.2f\n", area);

    // int employeeID,areacode,hno,pincode;
    // scanf("%d",&hno);
    // scanf("%d",&pincode);
    // scanf("%d",&employeeID);
    // scanf("%d",&areacode);
    // printf("EmployeeId : %d\nArea Code : %d\nHouse Number : %d\nPincode : %d",employeeID,areacode,hno,pincode);

    // float base1,base2,height,area;
    // scanf("%f %f %f",&base1,&base2,&height);
    // area = base1+base2;
    // area = area/2*height;
    // printf("%.2f",area);

    // int seconds,days,hours,minutes;
    // scanf("%d",&seconds);
    // days = seconds/86400;
    // hours = seconds%86400/3600;
    // minutes= seconds%3600/60;
    // seconds= seconds%60;
    // printf("The Duration is %d days %d hours %d minutes %d seconds",days,hours,minutes,seconds);

    // int n;
    // scanf("%d",&n);
    // if(n%3==0){
    //     printf("YES");
    // }
    //     if(n%3!=0){
    //         printf("NO");
    //     }
    // // else{
    //     printf("NO");
    // }

    // int price,loaves,regularprice;
    // float discountrate,discount,finalprice;
    // price=185;
    // discount=0.6;
    // scanf("%d",&loaves);
    // regularprice=loaves*price;
    // discountrate=regularprice*discount;
    // finalprice =regularprice - discountrate;
    // printf("Regular Price=%d\nAmount Discounted=%.2f\nAmount to be paid=%.2f\n",regularprice,discountrate,finalprice);

    // float s1,s2,s3,s,area;
    //     scanf("%f %f %f", &s1, &s2, &s3);
    //     s = (s1 + s2 + s3) / 2;
    //     area = s * (s - s1) * (s - s2) * (s - s3);
    //     area = sqrt(area);
    //     printf("Area of a triangle = %.2f\n", area);

    // int y= 1234;
    // printf("%d",y%10);

    // float num=354.345;
    // int a;
    // printf("%f\n",num);
    // a = (int)(num);
    // printf("%d",a);

    // int number;
    //     printf("\n Please Enter the Number You want to Convert  :  ");
    //     scanf("%d", &number);

    //     printf("\n Octal Number of a Given Number =  %o", number);
    //     printf("\n hexadecimal Number of a Given Number =  %x", number);

    // int number;
    //     printf("\n Please Enter the Number You want to Convert  :  ");
    //     scanf("%d", &number);

    //     long oct  = Decimal_to_Octal(number);
    //     printf("\n Equivalent Octal Number of %d =  %ld", number, oct);

    // int a,b,k;
    // scanf("%d %d %d",&a,&b,&k);
    // if(a>=k){
    //     printf("%d %d",a-k,b);
    // }
    // else if(k<=b){
    //     printf("%d %d" ,b-k,a);
    // }
    // else{
    //     ;
    // }

    // int n;
    // scanf("%d",&n);
    // n = n/2;
    // printf("%d",n);

    // int n;
    // scanf("%d",&n);

    // int n,count;
    // scanf("%d",&n);
    //     count=0;
    //     while(n!=0){
    //         n = n/10;
    //         count++;
    //     }
    //     // printf("%d",count);
    // if(count==1){
    //     printf("Insufficient Earning");
    // }
    // else if(count==2){
    //     printf("Very Low Earning");
    // }
    // else if(count==3){
    //     printf("Low Earning");
    // }
    // else if(count==4){
    //     printf("Sufficient Earning");
    // }
    // else{
    //     printf("High Earning");
    // }

    // char ch;

    //     //Asking user to enter the character
    //     printf("Enter any character: ");
    //     //storing the entered character into the variable ch
    //     scanf("%c",&ch);

    //     if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
    //         printf("The entered character %c is an Alphabet",ch);
    //     else
    //         printf("The entered character %c is not an Alphabet",ch);

    // int a,b,c,d,n;
    // scanf("%d %d %d",&a,&b,&n);
    // c = a*2;
    // d = b*2;
    // if(n%2==0){
    //     c = c * n/2;
    //     d = d * n/2;
    //     if(a>b){
    //         printf("%d",c/d);
    //     }
    //     else{
    //         printf("%d",d/c);
    //     }
    // }
    // else if(n==1){
    //     c = c*(n/2+1);
    //     printf("%d\n",c);
    //     d = b * 1;
    //     printf("%d\n",d);
    //     printf("%d",c/d);
    // }
    // else{
    //     c = c*(n/2+1);
    //     printf("%d\n",c);
    //     d = d*(n/2);
    //     printf("%d\n",d);
    //     if(c>d){
    //         printf("%d",c/d);
    //     }
    //     else{
    //         printf("%d",d/c);
    //     }
    // }

    // float number1,number2,approx;
    // scanf("%f %f",&number1,&number2);
    // approx = number1-number2;
    // printf("%f",approx);
    // if(approx<=0.5 && approx>0){
    //     printf("Approximate Number");
    // }
    // else{
    //     printf("Not an Approximate Number");
    // }

    // int s1,s2,s3,s4,s5;
    // int total;
    // float per;
    // scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
    // total = s1+s2+s3+s4+s5;
    // // printf("%d\n",total);
    // per = total/5;
    // printf("%.2f\n",per);

    // if(per>=90){
    //     printf("Grade A");
    // }
    // else if(per>=80){
    //     printf("Grade B");
    // }
    // else if(per>=70){
    //     printf("Grade C");
    // }
    // else if(per>=60){
    //     printf("Grade D");
    // }
    // else if(per>=50){
    //     printf("Grade E");
    // }
    // else{
    //     printf("Grade F");
    // }

    // //l3-10
    // float distance,meter,feet,inches,centimeter;
    // scanf("%f",&distance);
    // meter = distance*1000;
    // feet = meter*3.28084;
    // inches =meter*39.3701;
    // centimeter = meter*100;
    // printf("%.2f m\n%.2f ft\n%.2f in\n%.2f cm",meter,feet,inches,centimeter);

    // 	return 0;

    ////l3-11
    // int lengthofbook,numofpages;
    // scanf("%d",&lengthofbook);
    // scanf("%d",&numofpages);
    // if( (llengthofbook<=23) && (numofpages>500 && numofpages<=1000)){
    //     printf("Take Medicine");
    // }
    // else{
    //     printf("Don't take Medicine");
    // }

    ////l3-12
    // int days;
    // days = 0;
    // scanf("%d",&days);
    // switch(days)
    // {
    //     case 1:
    //     printf("Azure");
    //     break;

    //     case 2:
    //     printf("Beige");
    //     break;

    //     case 3:
    //     printf("Brick Red");
    //     break;

    //     case 4:
    //     printf("Champagne");
    //     break;

    //     case 5:
    //     printf("Desert sand");
    //     break;

    //     case 6:
    //     printf("Ivory");
    //     break;

    //     case 7:
    //     printf("Pear");
    //     break;

    //     default:
    //     printf("Invalid");

    // }

    ////l3-13
    // int travelmode;
    // travelmode=0;
    // scanf("%d",&travelmode);
    // switch(travelmode){
    //     case 1:
    //     printf("Car is booked");
    //     break;
    //     case 2:
    //     printf("Bus is booked");
    //     break;
    //     case 3:
    //     printf("Flight is booked");
    //     break;
    //     default:
    //     printf("Invalid Request");
    // }

    ////l3-14
    // int firstnum,secondnum;
    // scanf("%d %d",&firstnum,&secondnum);
    // printf("%d %d\n",firstnum--,++secondnum);
    // printf("%d %d\n",firstnum++,--secondnum);
    // printf("%d %d\n",firstnum--,++secondnum);
    // printf("%d %d\n",firstnum++,--secondnum);
    // printf("%d %d\n",firstnum--,++secondnum);

    ////l3-15
    // char operator;
    // double n1, n2;
    // scanf("%c",&operator);
    // scanf("%lf %lf",&n1,&n2);
    // switch(operator){
    //     case '+':
    //     printf("%.1lf ",n1+n2);
    //     break;
    //     case '-':
    //     printf("%.1lf ",n1-n2);
    //     break;
    //     case '*':
    //     printf("%.1lf ",n1 * n2);
    //     break;
    //     case '/':
    //     printf("%.1lf ",n1/n2);
    //     break;
    // }

    ////l3-16
    // char gender;
    // scanf("%c",&gender);
    // switch(gender){
    //     case 'M':
    //     case 'm':
    //     printf("Male");
    //     break;
    //     case 'F':
    //     case 'f':
    //     printf("Female");
    //     break;
    //     default:
    //     printf("Unspecified Gender");
    // }

    ////l3-16
    // int d1,d2,m1,m2,y1,y2;
    // scanf("%d %d %d",&d1,&m1,&y1);
    // scanf("%d %d %d",&d2,&m2,&y2);

    // if(y1>y2){
    //     printf("%d",10000);
    // }
    // else if(m1>m2){
    //     printf("%d ",(m1-m2)*500);
    // }

    // else if(d1>d2){
    //     printf("%d ",(d1-d2)*15);
    // }

    ////l3 -18
    // int workage;
    // scanf("%d",&workage);
    // if(workage<18){
    //     printf("You are Minor\nContinue Your Studies");
    // }
    // else if(workage>=18 && workage<=60){
    //     printf("You are Eligible\nYou can Apply for Job");
    // }
    // else{
    //     printf("You are too Old\nPls Collect your Pension");
    // }

    ////l3-19

    // int workalloid;
    // workalloid=0;
    // scanf("%d",&workalloid);
    // switch(workalloid){
    //     case 101:
    //     printf("Cinematographer");
    //     break;
    //     case 201:
    //     printf("Editor");
    //     break;
    //     case 301:
    //     printf("Marketing Manager");
    //     break;
    //     case 401:
    //     printf("Content Engineer");
    //     break;
    //     case 501:
    //     printf("Editorial Assistant");
    //     break;
    // }

    //// l3- 20
    // int n;
    // scanf("%d",&n);
    // if(n%3==0){
    //     printf("YES");
    // }
    // else{
    //     printf("NO");
    // }

    // int note50,note20,note10,note5,note2,note1,amount;

    // scanf("%d",&amount);
    // // note50 = amount/50;
    // // note20 = amount/20;
    // // note10 = amount/10;
    // // note2 = amount/2;
    // // note1= amount/1;

    // if(amount%50==0){
    //     printf("50 : %d\n",amount/50);
    //     printf("20 : 0\n");
    //     printf("10 : 0\n");
    //     printf("2 : 0\n");
    //     printf("1 : 0\n");

    // }
    // else if(amount%50!=0 && amount%50%20==0){
    //     printf("50 : %d\n",amount/50);
    //     printf("20 : %d\n",amount%50/20);
    //     printf("10 : 0\n");
    //     printf("2 : 0\n");
    //     printf("1 : 0\n");
    // }
    // else if(amount%50!=0 && amount%20%10==0){
    //     printf("50 : %d\n",amount/50);
    //     printf("20 : %d\n",amount%50/20);
    //     printf("10 : %d\n",amount%20/10);
    //     printf("2 : 0\n");
    //     printf("1 : 0\n");
    // }
    // else if(amount%50!=0 && amount%20%10%2==0){
    //     printf("50 : %d\n",amount/50);
    //     printf("20 : %d\n",amount%50/20);
    //     printf("10 : %d\n",amount%20/10);
    //     printf("2 : %d\n",amount%20%10/2);
    //     printf("1 : 0\n");
    // }
    // else if(amount%50!=0 && amount%20%10%2%1==0){
    //     printf("50 : %d\n",amount/50);
    //     printf("20 : %d\n",amount%50/20);
    //     printf("10 : %d\n",amount%20/10);
    //     printf("2 : %d\n",amount%20%10/2);
    //     printf("1 : %d\n",amount%20%10%2/1);
    // }

    // int a,b,c,d,n;
    // scanf("%d %d %d",&a,&b,&n);
    // if(n%2==0 || n==1){ c = a * n/2;d = b * n/2;
    //     if(a>b){
    //         printf("%d",c/d);
    //     }
    //     else{
    //         printf("%d",d/c);
    //     }
    // }
    // else{ c = a * 2* (n/2+1); d = b * 2* (n/2);
    //     if(c>d){
    //         printf("%d",c/d);
    //     }
    //     else{
    //         printf("%d",d/c);
    //     }
    // }

    // l1 - 23

    // int noofrowsinclass;
    // scanf("%d", &noofrowsinclass);

    // for (int i = 1; i <= noofrowsinclass; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         if ((i) % 2 == 0)
    //         {
    //             printf("Fail ");
    //         }
    //         if ((i) % 2 != 0)
    //         {
    //             printf("Pass ");
    //         }
    //     }

    //     printf("\n");
    // }



// l1-24

int r,c;
// int elems[3][3]={{}}

    return 0;
}
