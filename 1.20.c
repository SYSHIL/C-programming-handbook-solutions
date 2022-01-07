#include <stdio.h>
#define TAB_LEN 8
int main()
{
    int no_of_blanks;
    char c;
    while((c=getchar())!='\0'){
        if(c=='\t'){
            no_of_blanks=TAB_LEN;  
            while(no_of_blanks--){
                putchar(' ');
            }
        }
        else{
            putchar(c);
        }
        
    }

    return 0;
}
