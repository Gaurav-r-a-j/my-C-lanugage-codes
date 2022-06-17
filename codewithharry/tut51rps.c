//lets make a rock paper scissor game
// got to ex or tut -56


#include <stdio.h>
#include <stdlib.h>// to generate a random number we have a function srand and rand in this header file or say stdlib.h header file
#include <time.h>//

int generateRandomNumber(int n)
{   
    srand(time(NULL));
    return rand()%n;
}


int main()
{
//     srand(time(NULL));//srand takes seed as an input and is defined inside stdlib.h(it means kitne time ke baad change karna hai value)
//     printf("The random number between 0 to 100 is %d\n",rand()%100);// this is how we can generate  random numbers

    printf("The random number between 0 to n is %d\n", generateRandomNumber(5));

    return 0;
}
