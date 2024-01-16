num=int(input())
n=int(input())
print("\n")

sum=0

for i in range(0,num,1):
    x=n**i
    print(n,"^",i,"=",x)
    sum=sum+x
    
    
print("\n")
print(sum)