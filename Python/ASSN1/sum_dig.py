a=int(input("Enter a number:"))
sum=0
while a!=0:
    b=a%10
    a=int(a/10)
    sum=sum+b
print("the sum of digits is ",sum)
