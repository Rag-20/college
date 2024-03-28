n=int(input("How many names do you want to enter??"))

file1 = open("emp_li.txt","a+")
for i in range (n):
    var1=input("Enter a name :- ")
    file1.write(var1)
    file1.write("\n")
file1.seek(0)
print("names written in the file are:-\n",file1.read())
file1.close()
