
#include<stdio.h>
#include<stdint.h>
//convert hexadecimal to an equivalent decimal
int Htoi(char *hex){
    int n=0;
    int dif,i=0;
    if(hex[0]=='0' && (hex[1]=='X' || hex[1]=='x'))
       i=2;
    while(hex[i]!='\0'){
       if(hex[i]>='A' && hex[i]<='F')
           dif = (hex[i]-55); //A is 10
       else if(hex[i]>='0' && hex[i]<='9')
           dif = (hex[i]-48);
       n = n*16 + (dif);       
       i++;
    }
    return n;
}
int main(){
    printf("%d",Htoi("0xA1F"));
    return 0;
}
