#include<stdio.h>
void main(){
    int angle1, angle2, angle3,sum;
    printf("Enter the three angle :");
    scanf("%d%d%d",&angle1,&angle2,&angle3);
    sum=angle1+angle2+angle3;
    if(sum==180){
        printf("valid triangle");
    }
    else {
        printf("invalid triangle");
    }
}