#include <stdio.h>
#define IN 1
#define OUT 0
int main(void)
{
  char c;
  int state;
  int value = '#';
  while ((c = getchar()) != EOF)
  {
    if(c!=' ' && c!='\t'){
        putchar(value);
        state=IN;
    }
    else if(c==' ' && state==IN){
        printf("\n");
        state=OUT;
    }
  }

  return 0;
}
