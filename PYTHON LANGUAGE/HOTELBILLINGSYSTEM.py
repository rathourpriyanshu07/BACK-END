
print("===== Welcome to Grand Palace Hotel =====")

name = input("Enter Customer Name: ")
days = int(input("Enter Number of Days Stayed: "))
room_type = input("Enter Room Type (Deluxe/Suite/Standard): ").lower()

if room_type == "deluxe":
    rent_per_day = 3000
elif room_type == "suite":
    rent_per_day = 5000
elif room_type == "standard":
    rent_per_day = 2000
else:
    print("Invalid room type! Defaulting to Standard Room.")
    rent_per_day = 2000

room_rent = rent_per_day * days

food_bill = float(input("Enter Food Charges: ₹"))
service_charge = float(input("Enter Service Charges: ₹"))

total_bill = room_rent + food_bill + service_charge
gst = total_bill * 0.12     
net_amount = total_bill + gst

print("\n===== Hotel Bill =====")
print(f"Customer Name: {name}")
print(f"Room Type: {room_type.title()}")
print(f"Days Stayed: {days}")
print(f"Room Rent: ₹{room_rent}")
print(f"Food Bill: ₹{food_bill}")
print(f"Service Charge: ₹{service_charge}")
print(f"GST (12%): ₹{gst:.2f}")
print("---------------------------")
print(f"Total Amount Payable: ₹{net_amount:.2f}")
print("===========================")
print("Thank you for staying with us!")
