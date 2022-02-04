#include<stdio.h>
int map[256]={0};
#define LENGTH 50
// index corresponds to ascii value
void getstring(char string[]){
    int c,i;
    fflush(stdin);
    for(i=0;i<LENGTH-1 && (c=getchar())!=EOF && c!='\n';i++){
        string[i]=c;
        map[c] = 1;
    }
    string[i]='\0';
} 
void delete_occurences(char string[]){
    int c,i,j;
    for(i=0,j=0;string[j]!='\0';j++){
        if(map[string[i]]==0){
            i++;
        }
        else if(map[string[i]] == 1 && map[string[j]]==1){
            continue;
        }
        else if(map[string[i]] == 1 && map[string[j]]==0){
            string[i]=string[j];
            i++;
        }
    }
    string[i]='\0';
}
int main(){
    char string1[LENGTH];
    char string2[LENGTH];
    printf("Enter string");
    scanf("%s",string1);
    printf("Enter other string");
    getstring(string2);
    delete_occurences(string1);
    printf("%s",string1);

    return 0;
}
