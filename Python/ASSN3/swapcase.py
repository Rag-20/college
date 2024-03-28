str1=str(input("Enter a string: "))

if(str1.isupper()):
    print("The entire string is in upper-case")
    print()
    print("swapped case is: ",str1.swapcase())
elif(str1.islower()):
    print("The entire string is in lower-case")
    print()
    print("swapped case is: ",str1.swapcase())
else:
    print("The entire string is neither in lower-case nor in upper-case(it can be number or combination of lower or upper or both")
    print()
    print("swapped case is: ",str1.swapcase())

