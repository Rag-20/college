row=int(input("Enter the number of rows:"))

for i in range(1,row+1):
    print()
    for j in range(1,i+1):
        print("1",end=" ")

print()

for i in range(1,row+1):
    print()
    for j in range(0,i):
        print(j+1,end=" ")

print()

for i in range(row,0,-1):
    print()
    for j in range(i,0,-1):
        print(j,end=" ")

print()

