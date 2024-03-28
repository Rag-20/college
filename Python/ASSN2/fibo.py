n=int(input("Enter a number till which you have to find fibonacci series :"))
a=0
b=1
print("fibonacci series is : ",a,b,end=" ")
for i in range(3,n+1):
    c=a+b
    a=b
    b=c
    print(c,end=" ")
