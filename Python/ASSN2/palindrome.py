n=int(input("Enter a number: "))
temp=n
b=0
while n!=0:
    a=n%10
    b=b*10+a
    n=int(n/10)

if(temp==b):
    print("Number is palindrome")
else:
    print("Number is not palindrome")
    
