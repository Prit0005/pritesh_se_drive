// WAP to find area of circle, rectangle and triangle


//circle
 #include<stdio.h>
void main(){
    float radius,area_circle;
    printf("Enter Radius of Circle: ");
    scanf("%f", &radius);
    area_circle = 3.14*radius*radius;
    printf("Area of Circle: %f ",area_circle);
} 



//rectangle
 #include<stdio.h>
void main(){
    int hight ,width,area_rectangle;
    printf("Enter Height and width of Rectangle : ");
    scanf("%d%d",&hight,&width);
    area_rectangle=hight*width;
    printf("Area of Rectangle : %d",area_rectangle);
} 




//triangle
#include <stdio.h>
void main(){
    int base,height,area_triangle;
    printf("Enter base and height of Rectangle :");
    scanf("%d%d",&base,&height);
    area_triangle=base*height*1/2;
     printf("Area of triangle : %d",area_triangle);
}

