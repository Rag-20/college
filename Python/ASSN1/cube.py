a=int(input("Enter the first number:"))
b=int(input("Enter the second number:"))
print("Cube of the num,bers are ",end=" ")
if(a<b):
    for m in range(a,b+1):
        print(m*m*m,end=" ")
