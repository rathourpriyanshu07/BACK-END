#Function With No Argument & No Return Value .

def printline():
    print("*"*50)

printline()
print("Welcome to user defined function")
printline()

#Function With Argument But No Return Value.

def add(a,b):
    print("Addition : ",a+b)

printline()
add(int(input("Enter Value : ")),int(input("Enter Value : ")))
printline()

#Function With argument & Return Value.\

def sub(a,b):
    return(a-b)
printline()
ans=sub(int(input("Enter Value : ")),int(input("Enter Value : ")))
#print("Subtraction : ",sub(int(input("Enter Value : "),int(input("Enter Value :")))
print("Subtraction :",ans)
printline()
