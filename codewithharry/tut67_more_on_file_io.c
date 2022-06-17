// //Working with files

// //Modes
// r 
// w = it cleans the file first then write
// a 
// r+ = cleaning and inserting done from starting till the length of your string
// w+ = cleans the whole file then write
// a+ = reading and appending


//There are various function provided by C standar library to read and write a file . character by character or in the form of a fixed length string

// 1= fputc
/*
helps to insert character 
int fputc(character, file pointer);
it returns the written character on success
 On failure it returns EOF(end of file character)
 The EOF is constant defined in the header file stdio.h
*/


// 2= fputs
/*
fputs fucntion is used to write a null terminated string to afile in c
int fputs(const char*s, file *ptr)
*/


// 3= fgetc
/*
heps us to read characters one at a time
*/


// 4= fgets
/*
fgets function is used to read a null teminated string to a file in c
int fgets(const char*s, int n, file *ptr) = int n is the no. of character + 1 we want to read
*/


#include <stdio.h>




int main()
{
    FILE * ptr = NULL;
    // ptr = fopen("myfile.txt","r");
    ptr = fopen("myfile.txt","a+");
    // char c = fgetc(ptr);
    // printf("The character I read was %c\n",c);
    // c = fgetc(ptr);// the no. of time you use this it will move to the next character
    // printf("The character I read was %c\n",c);


    // char str[34];
    // fgets(str,10,ptr);
    // printf("The string is %s\n", str);


    fputc('o',ptr);
    fputs("This is harry ",ptr);

    fclose(ptr);
    return 0;
}
