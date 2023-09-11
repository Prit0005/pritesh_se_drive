#include<stdio.h>
void main(){
    int row,col;
    for(row=0;row<5;row++){
        for(col=1;col<=4;col++){
           printf("*");
           if(row==4-col){
            printf("$");
          
           }
        }
        printf("\n");       
    }
}