#include <sys/stat.h> // for stat function
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFSIZE 256

int main(int argc, char** argv) {
    // Ensure that the user supplied exactly one command line argument
    if (argc != 2) {
        fprintf(stderr, "Please provide the address of a file as an input.\n");
        return -1;
    }

    //use stat for determine file size
    struct stat fileInfo; //Prepare struct (object)
    stat(argv[1], &fileInfo); //populate fileInfo 
    printf(fileInfo.st_size); //Print file size
}
