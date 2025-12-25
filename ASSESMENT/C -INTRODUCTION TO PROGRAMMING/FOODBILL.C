#include <stdio.h>
#include <conio.h>

/* Structure for menu items */
struct MenuItem
 {
    int id;
    char name[30];
    float price;
};

/* Function to display the menu */
void displayMenu(struct MenuItem menu[], int size)
 {
    int i;
    printf("\n=========== MENU CARD ===========\n");
    printf("ID\tItem\t\tPrice (Rs.)\n");
    printf("---------------------------------\n");
    for(i = 0; i < size; i++) {
	printf("%d\t%-12s\t%.2f\n", menu[i].id, menu[i].name, menu[i].price);
    }
    printf("=================================\n");
}

void main(void)
 {


    /* Define the menu */
    struct MenuItem menu[] = {
	{1, "Pizza", 120.0},
	{2, "Burger", 80.0},
	{3, "Pasta", 100.0},
	{4, "Sandwich", 60.0},
	{5, "ColdDrink", 40.0}
    };
    int menuSize = 5;

    int choice, qty;
    char more;
    float totalBill = 0.0;
    clrscr();
    printf("\n====== Welcome to Food Billing System ======\n");

    do
     {
	/* Show menu */
	displayMenu(menu, menuSize);

	/* Take order */
	printf("\nEnter the ID of the item you want to order: ");
	scanf("%d", &choice);

	if(choice >= 1 && choice <= menuSize) {
	    printf("Enter quantity of %s: ", menu[choice-1].name);
	    scanf("%d", &qty);

	    totalBill += menu[choice-1].price * qty;

	    printf("\nAdded %d x %s\n", qty, menu[choice-1].name);
	    printf("Current Total Bill: Rs. %.2f\n", totalBill);
	}
	 else
	  {
	    printf("\nInvalid choice! Please select from menu.\n");
	}

	/* Ask for more — note the space before %c to skip newline */
	printf("\nDo you want to order more? (y/n): ");
	scanf(" %c", &more);

    }
     while(more == 'y' || more == 'Y');

    /* Final bill */
    printf("\n======= FINAL BILL =======\n");
    printf("Total Amount to Pay: Rs. %.2f\n", totalBill);
    printf("==========================\n");

    printf("\nThank you for ordering! Visit again.\n");

    getch();
}

