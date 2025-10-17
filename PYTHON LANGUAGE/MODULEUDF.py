import UDF

while True:
    print("*"*40)
    print("1. OddEven")
    print("2. MaxofTwo")
    print("3. MaxofThree")
    print("4. Prime")
    print("5. Fibonacci")
    print("6. Exit")
    print("*"*40)

    choice=int(input("Enter Your Choice : "))

    if choice==1:
        n1=int(input("Enter Number :"))
        UDF.oddeven(n1)
        print("*"*40)
    elif choice==2:
        n1=int(input("Enter Number :"))
        n2=int(input("Enter Number :"))
        UDF.maxoftwo(n1,n2)
        print("*"*40)
    elif choice==3:
         n1=int(input("Enter Number :"))
         n2=int(input("Enter Number :"))
         n3=int(input("Enter Number :"))
         UDF.maxofthree(n1,n2,n3)
         print("*"*40)
    elif choice==4:
          n1=int(input("Enter Number :"))
          UDF.prime(n1)
          print("*"*40)
    elif choice==5:
           n1=int(input("Enter Number :"))
           UDF.fibonacci(n1)
           print("*"*40)
    elif choice==6:
        print("Thank You For Using Our Services.")
        break
    else:
        print("Invalid Choice. Please Try Again,")
        print("*"*40)
