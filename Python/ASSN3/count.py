str1=str(input("Enter a string: "))
a=0
b=0
c=0
for i in str1:
 if(i.isupper()):
     a+=1
 elif(i.islower()):
     b+=1
 elif(i.isnumeric()):
     c+=1

print("Number of upper case alphabets: ",a)
print("Number of upper case alphabets: ",b)
print("Number of upper case alphabets: ",c)
