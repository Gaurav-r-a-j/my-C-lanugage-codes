// When working with files we have to declare a pointer of type file.
// the declaration help sus to work with files throught C program

//opening a file
/*
// stdio.h contains a function called fopen() for opening a files in c

// The syntax for opening a file in standar i/o file is:
// ptr = fopen("fileopen","mode");

// ex - fopen("file.txt","rb");

modes = r , w , a , rb= read biinary
*/


//closing a file
/*
// Any file which is opened in a C program needs to be closed.
// closing a file is accom;ished by the library function fclose().
// fclose(ptr); // ptr is the file pointer associated with file to be closed.

*/


//Rading a file
/*
// IN order to rad a file we can use fscanf funciton;.
//  this function is file version of scanf funciton .
// fscanf expects a file point4er in addition to the other arguements which scanf expects.
// we will have to open the file in read mode in order to use this function.

syntax 
fscanf(ptr, "%s", string);
*/



//Writing to a file
/*
// IN order to write to a file, we can use fprintf function.
// This function is file version of printf functoin.
// fprintf expects a file pinter in addition to the other arguements which printf expects .
// we will have to open the file in write mode in order to use this function.
syntax
fprintf(prt, "%s", string)
*/


#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *ptr = NULL;
    char string[64]="this content was produced by tut64";

    //*******Reading a file*********
    // ptr = fopen("myfile.txt","r");
    // fscanf(ptr,"%s",string);
    // printf("The content fo this file has %s\n",string);



    //******* Writing  a file ********
    // ptr = fopen("myfile.txt","w");
    // fprintf(ptr,"%s",string);

    //******* Appending to  a file ********
    ptr = fopen("myfile.txt","a");
    fprintf(ptr,"%s",string);



    return 0;
}





