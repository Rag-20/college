
n=int(input("Enter Starting range : "))
m=int(input("Enter ending range : "))

even=[]

for i in range(n,m+1):
    if(i%2==0 or i==0):
        even.append(i)

print("list is : ",even)        
