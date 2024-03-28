a=int(input("Enter a number:"))
print("The reversed number is:",end="")
while a!=0:
    b=a%10
    a=int(a/10)
    print(b,end="")
