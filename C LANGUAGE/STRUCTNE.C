#include <stdio.h>
#include <conio.h>

struct Address {
    char city[20];
    int pincode;
};

struct Person {
    char name[20];
    int age;
    struct Address addr;   // nested structure
};

void main() {
    struct Person p;
    clrscr();

    printf("Enter Name: ");
    scanf("%s", p.name);
    printf("Enter Age: ");
    scanf("%d", &p.age);
    printf("Enter City: ");
    scanf("%s", p.addr.city);
    printf("Enter Pincode: ");
    scanf("%d", &p.addr.pincode);

    printf("\n--- Person Details ---\n");
    printf("Name: %s\n", p.name);
    printf("Age : %d\n", p.age);
    printf("City: %s\n", p.addr.city);
    printf("Pincode: %d\n", p.addr.pincode);

    getch();
}
