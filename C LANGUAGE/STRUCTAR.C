#include <stdio.h>
#include <conio.h>

struct Employee {
    int id;
    char name[20];
    int salary;
};

void main() {
    struct Employee emp[3];  // array of structures
    int i;
    clrscr();

    for(i = 0; i < 3; i++) {
	printf("\nEnter details of Employee %d\n", i+1);
	printf("Enter ID: ");
	scanf("%d", &emp[i].id);

	printf("Enter Name: ");
	scanf("%s", emp[i].name);   // no & for string

	printf("Enter Salary: ");
	scanf("%d", &emp[i].salary);
    }

    printf("\n--- Employee Details ---\n");
    for(i = 0; i < 3; i++) {
	printf("\nID: %d\tName: %s\tSalary: %d", emp[i].id, emp[i].name, emp[i].salary);
    }

    getch();
}

