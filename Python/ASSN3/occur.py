str1=str(input("Enter a string: "))
a=0
b=0
for i in str1:
    if(i=="a"):
        a+=1
    elif(i=="A"):
        b+=1

print("number of occurance of 'a': ",a)
print("number of occurance of 'A': ",b)
