n=int(input("Enter a number for which you have to display multiplication table :"))
a=int(input("How many multiples do you want to print :"))

for i in range(1,a+1):
    print(n,"*",i,"=",n*i)
