'''
to take last digit from number :
153 % 10 -> remender is 3

afte take one last value make 153 to 15
153 % 10 -> 3
153 // 10 -> 15

15 % 10 -> 5
15 // 10 -> 1

'''

# def check_armstrong(a):
#     sum_ = 0
#     temp = a
#     order = len(str(a))
    
#     while(temp != 0):
#         digit = temp % 10
#         sum_ += digit ** order
#         temp = temp // 10
    
#     if(a == sum_):
#         return a
#     else:
#         return "ff"
    
# print(check_armstrong(153))

# x = ""

# for i in range(100,200):
#     x += str(check_armstrong(i))
    
# print(x)

def arm(num):
    temp = num
    sum_ = 0
    order = len(str(num))
    
    while(temp != 0):
        digit = temp % 10
        sum_ += digit ** order
        temp = temp // 10
    if(sum_ == num):
        return num
    else :
        pass
    
print(arm(150))