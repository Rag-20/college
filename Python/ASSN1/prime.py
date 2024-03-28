a=int(input("Enter a number to check if it is prime:"))
for m in range(2,a):
    if(a%m!=0):
        f=1
    else:
        f=0
        break
if(f==1):
    print("The number is prime")
else:
    print("NOt prime")
