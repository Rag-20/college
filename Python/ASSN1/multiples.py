a=int(input("Enter the first number:"))
b=int(input("Enter the second number:"))


print("Multiples of 3 and 5 in the range are ",end=" ")
f=0
for m in range(a,b+1):
    if(m%3==0 and m%5==0):
        f=f+1
        print(m,end=" ")

if(f==0):
    print("not available")
