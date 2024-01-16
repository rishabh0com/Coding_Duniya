
# def fact(num):
#     if num == 1:
#         return 1
#     else :
#        return num * fact(num-1)

# print(fact(5))

"""
5 * 4 * 3 * 2 * 1
5 * 4
"""
num = 3
fact = 1

for i in range(1,num+1):

    fact = fact * i
   
    
print(fact)


