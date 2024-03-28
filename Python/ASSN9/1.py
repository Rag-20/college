file1 = open("text.txt","r")
print(file1.read(20))
file1.close()

file1 = open("text.txt","a")
file1.write("...20...")
file1 = open("text.txt","r")
print(file1.read())
file1.close()
file1.close()

