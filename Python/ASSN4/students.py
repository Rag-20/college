
n=int(input("How many number of students do you wish to enter?? : "))
stud=[]
stud1=[]
for i in range (0,n):
    j=i+1
    name=input("{}.".format(j))
    stud.append(name)

print("The entered list in alphabetical order is:-")

for i in range (0,n):
    j=i+1
    name1=stud[i].capitalize()
    stud1.append(name1)

stud1.sort()

for i in range (0,n):
    j=i+1
    print("{}.".format(j),stud1[i])
