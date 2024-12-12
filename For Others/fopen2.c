#include <stdio.h>

int main() {
    FILE *ptr;
    FILE *str;
    char buffer[256]; // Buffer to store lines read from file2.txt

    // Open file.txt for writing (or appending if you want to keep existing content)
    ptr = fopen("file.txt", "a+");
    if (ptr == NULL) {
        printf("Cannot open file.txt for writing\n");
        return 1;
    }

    // Open file2.txt for reading
    str = fopen("file2.txt", "r");
    if (str == NULL) {
        printf("Cannot open file2.txt for reading\n");
        fclose(ptr);
        return 1;
    }

    // Read from file2.txt and write to file.txt
    while (fgets(buffer, sizeof(buffer), str) != NULL) {
        fputs(buffer, ptr);
    }

    fclose(str);
    fclose(ptr);

    return 0;
}
