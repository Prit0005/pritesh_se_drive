#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter the threee number :");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b && a>c) {
        printf("%d is bigger",a);
    }
    else if(b>c){
        printf("%d is bigger",b);
    }
    else {
        printf("%d is bigger",c);
    }
}