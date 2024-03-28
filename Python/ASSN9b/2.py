def accept():
    data={}
    n=int(input("How many data do you want to enter??"))
    for i in range(0,n):
        citizen=input("Enter name : ")
        age=int(input("Enter age : "))
        data[citizen]=age

    return data

data=accept()

file1=open("csv_type.txt","w")
file1.write("Name\t\tAge\n")
file1.close()

file1=open("csv_type.txt","a")
for i in data.keys():
    file1.write(i)
    file1.write("\t\t")
    file1.write(str(data[i]))
    file1.write("\n")
file1.close()
