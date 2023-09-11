#include<stdio.h>
void main(){
int row,col;
for(row=0;row<=4;row++) {
    
    for(col=0;col<=row;col++){
        printf("%c",row+'a');
    }
    printf("\n");
}   
}