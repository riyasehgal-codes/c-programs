#include<stdio.h>

int main(){
    FILE *fptr= fopen("hello.txt","a");
    char content[]= "hello world" ;
    fprintf( fptr,content);
    fclose(fptr);
    return 0;
}

// #include <stdio.h>

// int main() {
//     // Open a file in write mode ("w")
//     FILE *filePointer = fopen("output.txt", "w");

//     // Check if the file opened successfully
//     if (filePointer == NULL) {
//         printf("Error opening file!\n");
//         return 1;  // Exit with an error code
//     }

//     // Write a sentence to the file
//     fprintf(filePointer, "This is a sentence written to the file.\n");

//     // Alternatively, use fputs() for a simpler string write:
//     // fputs("This is another line written to the file.\n", filePointer);

//     // Close the file
//     fclose(filePointer);

//     printf("Sentence successfully written to the file.\n");
//     return 0;
// }
