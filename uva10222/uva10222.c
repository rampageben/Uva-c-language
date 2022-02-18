#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(void){
    char a[48]={" `1234567890-=qwertyuiop[]asdfghjkl;'zxcvbnm,./"};
    char b[2000];
    int i,j,k;
    while(gets(b)){
       for(i=0;i<strlen(b);i++){
           b[i]=tolower(b[i]);
       
       for(j=0;j<48;j++){
           if(b[i]==a[0]){
               printf(" ");
               break;
           }
           else if((int)b[i]==92){
               printf("[");
               break;
           }
           else if(b[i]==a[j]){
               printf("%c",a[j-2]);
               break;
           }
       }
       }
       printf("\n");
    }
    return 0;
}