#include<stdio.h>
void main(){
    int row,col,k=1;
    for(row=0;row<=4;row++){
        for(col=0;col<=4;col++){
          
           if(row==4-col){
            printf("$");
           }
           else{
             printf("*");
           }
        }
        printf("\n");       
    }
}