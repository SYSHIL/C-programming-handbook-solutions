#include <stdio.h>

int main(){
  char c;
  char last_c;
  while ((c = getchar()) != EOF)
  {
    if (c != ' ' || last_c != ' ')
    {
      putchar(c);
    }

    last_c = c;
  }

  return 0;
}
