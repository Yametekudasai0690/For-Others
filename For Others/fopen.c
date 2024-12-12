#include <stdio.h>


int main() {
    FILE *pointer = NULL;
    char buffer[256]; // Buffer to store the line read from the file

    pointer = fopen("file.txt", "r");
    if (pointer == NULL) {
        printf("Cannot open file file.txt for reading\n"); 
        return 1;
    }

    // Read a line from the file
    if (fgets(buffer, sizeof(buffer), pointer) != NULL) {
        printf("%s\n", buffer);
    } else {
        printf("Failed to read from file\n");
    }

    fclose(pointer);

    return 0;
}
 