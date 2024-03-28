n = int(input("enter a number: "))
a = ""
while True:
    if n == 0:
        break
    v = n%10
    a += str(v)
    n = int(n/10)

print(a)
    
