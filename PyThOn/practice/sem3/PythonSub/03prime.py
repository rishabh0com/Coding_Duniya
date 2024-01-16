
primeNum = []

def checkPrime(a):
    bag = 0
    if(a == 1):
        return 1
    else :
        for i in range(1,a+1):
            if(a % i == 0):
                bag = bag + 1
        if(bag == 2):
            return a
        else:
            return False
        


for i in range(1,101):
    # primeNum = primeNum + str(checkPrime(i)) + ("" if checkPrime(i) == '' else " " )
    if checkPrime(i):
        primeNum.append(i)
    
    
print(primeNum)