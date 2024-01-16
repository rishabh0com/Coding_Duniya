
values = [12,35,23,10,2,4,7,9,8]

"""
syntax of lambda :

lambda x : condition , iterable (list,set,tuple)

"""

res = list(filter(lambda x : x % 2 == 0,values))

print(res)

x = lambda a : a + 10

print(x(20))
   # 01234
a = "helloshubham"
   #     -1

# list[start : stop : jump]
print(a[1: : 2])

list1 = [1,2,3,4]
print( 10 not in list1)