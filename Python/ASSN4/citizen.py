n=int(input("How many number of citizen do you wish to enter?? : "))
cit=[]

for i in range (0,n):
    j=i+1
    name=input("{}.".format(j))
    cit.append(name)

var=input("Enter the first letter of the name you want to search to find the count of them in the list")

k=0

for i in range (0,n):
    name=cit[i].capitalize()
    if(var.capitalize()==name[0]):
        k+=1

print("There are {} citizens whose name starts with {}".format(k,var))        
