#include<stdio.h>
void main(){
    int number,j[100],i,k;
    printf("how many table do you want to print:");
    scanf("%d",&number);
    for(i=0;i<number;i++)
    {
    printf("Enter the table number: \n");
    scanf("%d",&j[i]);
    printf("\n");
    }
    printf("This is your tables \n");
    for(i=0;i<number;i++)
    {
        printf("%d \n\t",j[i]);
    }
    for(i=0;i<number;i++)
    {
        for(k=1;k<=10;k++){
        printf("%d*%d=%d\n",j[i],k,k*j[i]);
    }

    }
} 
 