#include <limits.h>
#include <float.h>
#include <stdio.h>
// LIMITS OF DATA TYPES 
int main()
{
    printf("Range of unsigned char is from 0 to %d\n",UCHAR_MAX);
    printf("Range of signed char is from %d to %d\n",SCHAR_MIN,SCHAR_MAX);
    printf("Range of unsigned int is from 0 to %u\n",UINT_MAX);
    printf("Range of signed int is from %d to %d\n",INT_MIN,INT_MAX);
    printf("Range of signed long int is %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("Range of unsigned long int is 0 to %lu\n", ULONG_MAX);
    return 0;
}
