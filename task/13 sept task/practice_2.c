#include<stdio.h>
void main(){
    int arr[10],i;
    for(i=0;i<10;i++){
        printf("Enter the value :");
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++){
        printf("%d",arr[i]);
    }
    for(i=0;i<10;i++){
    if(arr[i]%2==0){
        printf("\ndivision by 2 : %d\t",arr[i]);
    }}
    for(i=0;i<10;i++){
     if (arr[i]%5==0){
        printf("\ndivision by 5 : %d\t",arr[i]);
    }}
    for(i=0;i<10;i++){
     if (arr[i]%10==0){
        printf("\ndivision by 10 : %d\t",arr[i]);
    }
    }
}