a=int(input("Enter The range starting from :"))
b=int(input("to "))
n=0
for i in range(a,b+1):
    for m in range(2,i):
        if(i%m!=0):
            f=1
        else:
            f=0
            break
    if(f==1):
        n=n+1

print("prime numbers in the given range are ",n)
