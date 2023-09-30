// WAP to show difference between Structure and union

#include <stdio.h>
#include <string.h>

// Define a structure
struct Student {
    char name[50];
    float marks;
};

// Define a union
union Data {
    int i;
    char str[20];
};

int main() {
    // Example of using a structure
    struct Student student1;
    strcpy(student1.name, "pritesh");
    student1.marks = 95.5;
    printf("Student Name: %s\n", student1.name);
    printf("Marks: %.2f\n", student1.marks);

    // Example of using a union
    union Data data;
    data.i = 10;
    printf("\nData as Integer: %d\n", data.i);
    strcpy(data.str, "Hello");
    printf("Data as String: %s\n", data.str);

    return 0;
}


