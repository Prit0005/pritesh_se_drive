/* Write a program of structure for five employee that provides the following 
information -print and display empno, empname, address and age */
#include <stdio.h>
#include <string.h>
struct table
{
    int empno,age;
    char name[20], address[20], ;
} t1,t2,t3,t4,t5;
void main()
{
    char name[20], address[20];
    char name1[20], address1[20]; 
   char name2[20], address2[20];
    char name3[20], address3[20]; 
    char name4[20], address4[20];
 
    
    
        printf("Enter employee number:");
        scanf("%d", &t1.empno);
        printf("Enter  your name :");
        scanf("%s", &name);
        strcpy(t1.name, name);
        printf("Enter your address:");
        scanf("%s", &address);
        strcpy(t1.address, address);
        printf("Enter your age:");
        scanf("%d", &t1.age);
        fflush(stdin);
        
        
        printf("Enter employee number:");
        scanf("%d", &t2.empno);
        printf("Enter  your name :");
        scanf("%s", &name1);
        strcpy(t2.name, name1);
        printf("Enter your address:");
        scanf("%s", &address1);
        strcpy(t2.surname, address1);
        printf("Enter your age:");
        scanf("%d", &t2.age);
        fflush(stdin);

       printf("Enter employee number:");
        scanf("%d", &t3.empno);
        printf("Enter  your name :");
        scanf("%s", &name2);
        strcpy(t3.name, name2);
        printf("Enter your address:");
        scanf("%s", &address);
        strcpy(t3.address, address);
        printf("Enter your age:");
        scanf("%d", &t3.age);
        fflush(stdin);
        
         printf("Enter empl;oyee number:");
        scanf("%d", &t4.empno);
        printf("Enter  your name :");
        scanf("%s", &name3);
        strcpy(t4.name, name3);
        printf("Enter your address:");
        scanf("%s", &address3);
        strcpy(t4.address, address3);
        printf("Enter your age:");
        scanf("%d", &t4.age);
        fflush(stdin);
        
         printf("Enter employee number:");
        scanf("%d", &t5.empno);
        printf("Enter  your name :");
        scanf("%s", &name4);
        strcpy(t5.name, name4);
        printf("Enter your address:");
        scanf("%s", &address4);
        strcpy(t5.address, address4);
        printf("Enter your age:");
        scanf("%d", &t5.age);
        fflush(stdin);
    
    printf("empno\tname\taddress\t\age\n");
    printf("%d\t\t%s\t%s\t%d\t\n",t1.empno,name,address,t1.age);
    printf("%d\t\t%s\t%s\t%d\t\n",t2.empno,name1,address1,t2.age);
    printf("%d\t\t%s\t%s\t%d\t\n",t3.empno,name2,address2,t3.age);
    printf("%d\t\t%s\t%s\t%d\t\n",t4.empno,name3,address3,t4.age);
    printf("%d\t\t%s\t%s\t%d\t\n",t5.empno,name4,address4,t5.age);
}
