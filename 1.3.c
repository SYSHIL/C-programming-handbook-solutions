#include <stdio.h>

int main()
{
    int celsius=0;
    float fahr;
    int lower = 0;
    int higher = 100;
    int step = 10;
    printf("celsius   Fahrenheit");
    printf("\n");
    while(lower<=higher){
        celsius+=step;
        fahr = (9*(celsius)/5) + 32;
        printf("%3d%6.1f",celsius,fahr);
        printf("\n");
        lower+=step;
    }

    return 0;
}
