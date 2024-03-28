name=['Mr.Suresh J','Zayn Malik','Ms.Janhavi H','Bella','Anuraag']
print('1....The list is:-\n',name)


j=0
for i in name:
    j+=1
    if(i=='Mr.Suresh J'):
        name[j-1]="Dr.Suresh J"

print("\n2....After replacing Mr.Suresh J the list is:-\n",name)


for i in name:
    if(i[0].capitalize()=='Z'):
        name.remove(i)

print("\n3....After deleting name starting from Z :-\n",name)

name.sort(reverse=True)
print("\n4....Sorted list in decending order is:-\n",name)


    
j=0
for i in name:
    j+=1
    if(i=='Ms.Janhavi H'):
        del name[j-1]
        
for i in range (1,3):
    name1=input("\nEnter a Name:- ")
    name.append(name1)
print("\n5....After deletion and adding 2 names:-\n ",name)

j=0
for i in name:
    if(i.endswith('a')):
        j+=1
print("\n6....There are {} Names eding with 'a'".format(j))

j=len(name)
print("\n7a.... Length of list:- ",j)
for i in range (1,j+1):
    name1=input("\nEnter a Name:- ")
    name.append(name1)
print("\n7b....After doubling the list names:-\n ",name)
j=len(name)
print("\n7c.... Length of list:- ",j)


    


