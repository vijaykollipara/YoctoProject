#include <stdio.h>
#include <stdlib.h>

int createFile()
{
    FILE *fptr;

    // Create a file
    fptr = fopen("/home/root/filename.txt", "w");
    if(fptr){
        printf("file created\n");
        // Close the file
        fclose(fptr);
    }else{
        printf("file not created\n");
    }
}