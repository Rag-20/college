n=int(input("enter number of characters to be read: "))
file1 = open("text.txt","r")
print(file1.read(n))
file1.close()
