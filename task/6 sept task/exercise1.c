#include<stdio.h>
void main(){
    int i,j;
    for(i=0;i<=5;i++){
        for(j=0;j<=i;j++){
            printf("%d ",i%2);
        }
        printf("\n");
    }
     for(i=4;i>=0;i--){
        for(j=0;j<=i;j++){
            printf("%d ",i%2);
        }
        printf("\n");
    }
}