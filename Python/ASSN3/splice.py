str1=str(input("Enter a string: "))
print("length of the string is: ",len(str1))

if(len(str1)>3):
    print(str1[2:-1])
else:
    print("Your string is too short to splice (splicing starts with #3 to #(n-1) character)")
