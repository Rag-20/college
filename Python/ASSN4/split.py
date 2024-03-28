email=[]
j=int(input("How many entries are you going to enter???"))
for i in range (0,j):
    eid=input("Enter the email-id of employee")
    email.append(eid)

list2=[]

for i in email:
    #print("",i.split("@"))
    list1=i.split("@")
    list2.append(list1)

print("",list2)
