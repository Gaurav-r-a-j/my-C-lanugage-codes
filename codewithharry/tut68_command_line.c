// Command line argument is an important concept in C programming
//sometimes we need to pass arguments from th command line to the program a set of inputs
//command line arguments are used to supply parameters to the program when is is invoked
//it is mostyly used when you need to control your program from the console
// these arguments are passed to the main() method


// examples= FFmpeg is a free and open-source project consisting of a vast software suite of libraries and programs for handling video,audio, and other mutlimedia file and streams
// iis is a command line software or utility written in c language 

// other example include git,brew,apt-get etc. 


//argc has default value 1

#include <stdio.h>

// vscode has its main snippet for argc , argv

int main(int argc, char const *argv[])
{
    printf("The value of argc is %d\n", argc);// 1 arguement is program name

    for (int i = 0; i < argc; i++)
    {
        printf("This arguement at index %d has a value of %s \n",i,argv[i]);// first argv gives full path
    }
    
    return 0;
}

//watch this video again for better understanding