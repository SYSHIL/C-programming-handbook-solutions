include<stdio.h>

int main(){
    
    int spaces=0,tabs=0,lines=0,conspaces=0;
    char c;
    while((c=getchar())!=EOF){
         if(conspaces==6){
            tabs++;
            conspaces=0;
            spaces=spaces-6;
         }
         else if(c==' '){
            spaces++;
            conspaces++;
         }
         else if(c=='\n'){
            conspaces=0;
            lines++;
         }
         else{
            conspaces=0;
         }
    }
    printf("\nSPACES : %d\nTABS : %d\nLINES : %d",spaces,tabs,lines);
}
            
