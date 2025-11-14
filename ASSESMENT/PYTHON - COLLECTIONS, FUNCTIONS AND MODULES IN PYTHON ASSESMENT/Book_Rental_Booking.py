from datetime import datetime

# ----------------------------
# Global list to store rentals
# ----------------------------
rentals = []
LATE_FEE_PER_DAY = 10

# ----------------------------
# Function: Rent a Book
# ----------------------------
def rent_book():
    print("\n--- Book Rental ---")
    name = input("Enter Customer Name: ")
    book = input("Enter Book Title: ")
    rental_date = input("Enter Rental Date (YYYY-MM-DD): ")
    return_date = input("Enter Expected Return Date (YYYY-MM-DD): ")

    rental = {
        "name": name,
        "book": book,
        "rental_date": rental_date,
        "return_date": return_date,
        "returned": False
    }
    rentals.append(rental)
    print(f"\n✅ Book '{book}' rented to {name} until {return_date}.")

# ----------------------------
# Function: Return a Book
# ----------------------------
def return_book():
    print("\n--- Book Return ---")
    name = input("Enter Customer Name: ")
    book = input("Enter Book Title: ")
    actual_return = input("Enter Actual Return Date (YYYY-MM-DD): ")

    for rental in rentals:
        if rental["name"] == name and rental["book"] == book and not rental["returned"]:
            rental["returned"] = True

            due_date = datetime.strptime(rental["return_date"], "%Y-%m-%d")
            act_date = datetime.strptime(actual_return, "%Y-%m-%d")
            late_days = (act_date - due_date).days

            late_fee = LATE_FEE_PER_DAY * late_days if late_days > 0 else 0

            print("\n--- RentTrack Receipt ---")
            print(f"Customer: {name}")
            print(f"Book: {book}")
            print(f"Due Date: {rental['return_date']}")
            print(f"Returned On: {actual_return}")
            print(f"Late Days: {max(late_days, 0)}")
            print(f"Late Fee: ₹{late_fee}")
            print("--------------------------\n")
            return
    print("❌ Record not found or already returned!")

# ----------------------------
# Function: Show All Rentals
# ----------------------------
def show_rentals():
    if not rentals:
        print("\n📚 No current rentals.")
        return
    print("\n--- Current Rentals ---")
    for r in rentals:
        status = "Returned" if r["returned"] else "Pending"
        print(f"{r['name']} - {r['book']} (Due: {r['return_date']}) [{status}]")

# ----------------------------
# Main Menu Loop
# ----------------------------
def main():
    while True:
        print("\n===== RentTrack Library Menu =====")
        print("1. Rent a Book")
        print("2. Return a Book")
        print("3. View All Rentals")
        print("4. Exit")
        choice = input("Enter your choice (1-4): ")

        if choice == "1":
            rent_book()
        elif choice == "2":
            return_book()
        elif choice == "3":
            show_rentals()
        elif choice == "4":
            print("👋 Exiting RentTrack. Goodbye!")
            break
        else:
            print("❌ Invalid choice. Please try again.")

# Run the program
if __name__ == "__main__":
    main()
