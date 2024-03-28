a=int(input("Enter the first number:"))
b=int(input("Enter the second number:"))
if(a<b):
    for m in range(b,a-1,-1):
        print(m,end=" ")
else:
    print("Enter the correct range")
        
