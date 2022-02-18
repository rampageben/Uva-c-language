#include<stdio.h>
#include<string.h>

int main(){

    char str[1001] = {0};
    int i, j;
    int flag = 0;

    while(gets(str)!=0){

        if(flag>0){
            printf("\n");
        }

        int count[128] = {0};
        flag = 1;

        for(i = 0; i < strlen(str); i++){
            count[str[i]]++;
        }

        for(i = 1; i <= strlen(str); i++){  
            for(j = 127; j >= 32; j--){      
                if(count[j] == i){
                    printf("%d %d\n", j, i);
                }
            }
        }    
    }

    return 0;
}
