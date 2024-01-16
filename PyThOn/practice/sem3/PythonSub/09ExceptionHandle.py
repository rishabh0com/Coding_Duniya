
# a = int(input("Enter num 1 : "))
# b = int(input("Enter num 2 : "))

# c = a / b
# print(c)
# print("Program end succesfully")

# above program display zero division error

a = int(input("Enter num 1 : "))
b = int(input("Enter num 2 : "))

try :
    c = a/b
except : 
    # this block execute when error occur on try block
    print("you cannot divide number with 0")
else : 
    # this execute when except not executed or try block have not any error
    print("Hii")
finally: 
    # this block execute everytime afte try and except 
    print("finally end")