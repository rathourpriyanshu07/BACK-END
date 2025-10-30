# Practical Example: Blood Donation Eligibility

age = int(input("Enter your age: "))
weight = float(input("Enter your weight (in kgs): "))

if age >= 18:
    if weight >= 50:
        print("You are eligible to donate blood.")
    else:
        print("You are not eligible due to low weight.")
else:
    print("You are not eligible due to age.")
