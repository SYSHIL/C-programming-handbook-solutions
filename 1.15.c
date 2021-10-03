#include <stdio.h>
float to_celsius(float);
int main()
{   printf("Fahrenheit : ");
    float fahr;
    scanf("%f",&fahr);
    printf("\nCelsius : %g",to_celsius(fahr));
    return 0;
}
float to_celsius(float fahr){
    return (fahr-32)*5.0/9.0;
}
