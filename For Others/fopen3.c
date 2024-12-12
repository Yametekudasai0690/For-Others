#include <stdio.h>
int main (){

    FILE * pointer;
    char buffer [100];

    pointer = fopen("file.txt","r");
    if(pointer == NULL){
        printf("file faile to open");
    }

    fread(buffer,50,1,pointer);
        printf("The value of pointer : %s",buffer);
    





    fclose(pointer);

    return 0;
}