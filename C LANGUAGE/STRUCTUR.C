#include <stdio.h>
#include <conio.h>

struct Student {
    int rollNo;
    char name[20];
    float marks;
};

void main() {
    struct Student s1;   // structure variable
    clrscr();

    printf("Enter Roll No: ");
    scanf("%d", &s1.rollNo);

    printf("Enter Name: ");
    scanf("%s", s1.name);

    printf("Enter Marks: ");
    scanf("%f", &s1.marks);

    printf("\n--- Student Details ---\n");
    printf("Roll No: %d\n", s1.rollNo);
    printf("Name   : %s\n", s1.name);
    printf("Marks  : %.2f\n", s1.marks);

    getch();
}
