#Lists are mutable as we can edit or render the sequence of the list as per our choice
#this property gives us the ability to handle data in the list 

list1=[2,"abc",10.5]
print("list 1=",list1)

list1.append(333)
print("Append=",list1)

list1.extend("Anuraag")
print("Extend=",list1)

list1.insert(1,236400)
print("Insert=",list1)

del(list1[1])
print("delete=",list1)
