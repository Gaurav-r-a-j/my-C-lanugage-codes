// When working with files we have to declare a pointer of type file.
// the declaration help us to work with files throught C program

//opening a file
/*
// stdio.h contains a function called fopen() for opening a files in c

// The syntax for opening a file in standard i/o file is:
// ptr = fopen("fileopen","mode");

// ex - fopen("file.txt","rb");

modes = r , w , a , rb= read binary
• r+ - open for reading and writing, start at beginning
• w+ - open for reading and writing (overwrite file)
• a+ - open for reading and writing (append if file exists)
*/


//closing a file
/*
// Any file which is opened in a C program needs to be closed.
// closing a file is accomplished by the standard library function fclose().
// fclose(ptr); // ptr is the file pointer associated with file to be closed.

*/


//Rading a file
/*
// IN order to read a file we can use fscanf funciton;.
//  this function is file version of scanf funciton .
// fscanf expects a file pointer in addition to the other arguements which scanf expects.
// we will have to open the file in read mode in order to use this function.

syntax 
fscanf(ptr, "%s", string);
*/



//Writing to a file
/*
// IN order to write to a file, we can use fprintf function.
// This function is file version of printf function.
// fprintf expects a file pinter in addition to the other arguements which printf expects .
// we will have to open the file in write mode in order to use this function.
syntax
fprintf(prt, "%s", string)
*/


#include <stdio.h>
// #include <stdlib.h>
int main()
{
    FILE *ptr = NULL;
    char c;
    char string[64]="this content was produced by tut64";
    // ptr = fopen("myfile.txt","r+");

    //*******Reading a file*********
    // ptr = fopen("myfile.txt","r");
    // fscanf(ptr,"%s",string);
    // printf("The content fo this file has %s\n",string);

    // m-2, using fgetc
    // ptr = fopen("myfile.txt","r");
    
    // printf("The content of your file is\n");
    // while (!feof(ptr))
    // {
    //     c = fgetc(ptr);
    //     putchar(c);
    // }
    





    //******* Writing  a file ********
    // ptr = fopen("myfile.txt","w");
    // fprintf(ptr,"%s",string);

    // M-2 using fputc 
    // ptr = fopen("myfile.txt","w");
    // printf("Enter the statement that you want to write in the file\n");
    // c = getchar();
    // while(c!='q'){
    //     fputc(c,ptr);
    //     c = getchar();
    // }



    //******* Appending to  a file ********
    // ptr = fopen("myfile.txt","a");
    // fprintf(ptr,"%s",string);
    // m-2
    // ptr = fopen("myfile.txt","a");
    // printf("Enter the statements you want to add at the end of the file\n");
    // c = getchar();
    // while (c!='q')
    // {
    //     fputc(c,ptr);
    //     c = getchar();
    // }
    


fclose(ptr);
    return 0;
}





