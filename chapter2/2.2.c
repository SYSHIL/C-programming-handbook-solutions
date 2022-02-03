// Emulating for loop without && and ||
#include <stdio.h>
#define LIM 100
int main()
{
    char s[LIM];
    int i=0,c;
    while(i<LIM-1){
        c=getchar();
        if(c=='\n')
           break;
        else if(c==EOF)
           break;
        s[i++] = (char)c;
    }
    s[i]='\0';
    printf("%s",s);

    return 0;
}
