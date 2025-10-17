class Bank:

    def openAccount(self,acno,cname,balance):
        self.acno=acno
        self.cname=cname
        self.balance=balance
        print("Hello",cname,"Your Acccount Number",acno,"Is Open With ",balance,"Rs")

    def deposit(self,amount):
        self.balance=self.balance+amount

    def withdraw(self,amount):
        if amount<=self.balance:
            self.balance=self.balance-amount
        else:
            print("Sorry You Need Another ",amount-self.balance,"More Rs. To Withdraw")

    def checkbalance(self):
        print("Current Balance : ",self.balance)

b1=Bank()

b1.openAccount(101,"Priyanshu",100000)

while True:
    print("1. Deposit")
    print("2. Withdraw")
    print("3. CheckBalance")
    print("4. Exit")

    choice=int(input("Enter Choice : "))
    if choice==1:
        amount=int(input("Enter Amount : "))
        b1.deposit(amount)

    elif choice==2:
        amount=int(input("Enter Amount : "))
        b1.withdraw(amount)

    elif choice==3:
        b1.checkbalance()

    elif choice==4:
        print("Thank You For Using Our Services")
        break
    else:
        print("Invalid Choice.Please Try Again")
    
