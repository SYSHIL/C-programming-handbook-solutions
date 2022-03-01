#include <stdio.h>

int main()
{
    int c;int i;
    int freqs[128];
    for(i=0;i<128;i++)
        freqs[i]=0;
    
    while((c=getchar())!=EOF){
        freqs[c]++;
    }
    for(i=0;i<128;i++){
        if(freqs[i]==0)
           continue;
        if(i==10){
            printf("Newline : ");
            printf("%d\n",freqs[i]);
            continue;
        }
        printf("%c : %d\n",i,freqs[i]);
    }

    return 0;
}
