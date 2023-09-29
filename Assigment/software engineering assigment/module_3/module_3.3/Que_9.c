/* Write a program of structure employee that provides the following 
information -print and display empno, empname, address and age  */
#include<stdio.h>
#include<string.h>
struct employ{
        int empno,age;
        char empname[20],address[50];
}e1;
void main(){
     char empname[20],address[50];
     printf("Enter your emploay number:");
     scanf("%d",&e1.empno);
     printf("Enter your name:");
     scanf("%s",&empname);
     strcpy(e1.empname,empname);
      fflush(stdin);
     printf("Enter your age:");
     scanf("%d",&e1.age);
     printf("Enter your address:");
     scanf("%s",&address);
   strcpy(e1.address,address);
     fflush(stdin);
     

     printf("your employ number is :%d\n",e1.empno);
        printf("your employ name is :%s\n",e1.empname);
       printf("your employ age is :%d\n",e1.age);
        printf("your employ address is :%s\n",address);

}