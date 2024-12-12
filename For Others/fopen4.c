#include<stdio.h>
int main() {  


FILE *file = fopen("file.txt", "r");
if (file != NULL) {
    fseek(file, 10, SEEK_SET);  // Move 10 bytes from the beginning
    char ch = fgetc(file);      // Read a character at this position
    printf("%c\n", ch);
    fclose(file);
}



return 0;
}