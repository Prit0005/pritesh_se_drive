#include<stdio.h>
void main(){
    int i,j;
    for(i=0;i<=4;i++){
        for(j=0;j<=i;j++){
            printf("%c",j+'a');
        }
        printf("\n");
    }
}