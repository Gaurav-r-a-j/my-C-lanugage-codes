//c library string.h

//first include string.h
// strcat()= used to concat strings. ex- strcat("hello","world");

// strlen()= used to get length of the string don't count any null character
//strrev()= reverese the string

// strcpy()= copy the string 1 to 2nd// strcpy(s1,s2);

//strcmp()=  gives sky difference between two aplhabets(not defined any speicfic)
// if full string match then return 0


#include <stdio.h>
#include <string.h>

int main()
{
    char s1[]= "harry";
    char s2[]= "ravi";
    char s3[54];
    // printf("The strcmp for s1, s2 returned %d\n",strcmp(s1,s2));// c standard says same ke liye 0 aur alag ke liye negative ya positive

    // puts(strcat(s1,s2));
    // printf("The lenght of s1 is %d\n",strlen(s1));
    // printf("The lenght of s2 is %d\n",strlen(s2));
    // printf("The reverse string s1 is : \n");
    // puts(strrev(s1));// this is not working why i don't know
    // puts(s1);

    // strcpy(s3 ,strcat(s1,s2));
    // puts(s3);
    return 0;
}
