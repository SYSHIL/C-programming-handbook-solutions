#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[]){
    char str[]="ilhan,nishu,shoie";
    char *piece = strtok(str,",");
    printf("%s\t",piece);
    while((piece=strtok(NULL,","))!=NULL){
        printf("%s\t",piece);
    }
    return 0;
}
