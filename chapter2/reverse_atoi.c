#include<stdio.h>
#include<math.h>
// atoi function returns string digits so I implemented reverse_atoi which does the same but reverse the digits
// another approach would be to find the length of the string and simply add up to the number 
int reverse_atoi(char s[]){
    int i,n;
    n=0;
    for(i=0;s[i]>='0' && s[i] <='9'; ++i)
        n=n+((s[i]-48)*pow(10,i));
        
    return n;
}
int main(){
    printf("%d",reverse_atoi("12043"));
    return 0;
}
