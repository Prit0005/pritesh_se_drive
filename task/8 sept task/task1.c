#include<stdio.h>
void main(){
    int i,arr[10],even=0,odd=0,even_total=0,odd_total;
    for(i=0; i<10; i++){
        printf("Enter the 10 number :");
        scanf("%d",&arr[i]);
    }
    for(i=0; i<10; i++){
    if( arr[i]%2==0){
    even++;
    even_total+=arr[i];
    printf("even number:%d\n",arr[i]);
    }
    }
    for(i=0; i<10; i++){
    if( arr[i]%2!= 0){
    odd++;
    odd_total+=arr[i];
    printf("odd number:%d\n",arr[i]);
        }
    }

 printf("total even numbe :%d\n",even);
 printf("total odd number :%d\n",odd);
 printf("sum of even number :%d\n",even_total);
 printf("sum of odd number :%d\n",odd_total);
}
