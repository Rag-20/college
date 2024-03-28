str1=[]
n=int(input("How many strings you want to enter??? :- "))
print("Enter the strings:-")
for i in range (0,n):
    j=i+1
    str2=input("{}.".format(j))
    str2=str2.strip()
    
    if(str2[0].lower()=='z'):
        str2=str2[1:]
    str1.append(str2)

print(str1)
