str1=str(input("Enter a string: "))


if(str1.startswith("S")):
    print("The reverse string is: ",str1[-1::-1])
else:
    print("The string does not starts with 'S'") 
