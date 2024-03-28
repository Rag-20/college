emp=['Anuraag','Musaif','Shubham','Prerna','Bhagyashree']

print("How do you want to display the name of the employee??")
try:
    a=int(input("Select\n 1.Uppercase\n 2.Lowercase \n"))
except:
    print("Enter valid choice(integer)")
else:
    if(a==2):
         for i in emp:
             print(i.lower())
     elif(a==1):
         for i in emp:
             print(i.upper(),end="!\n")
     else:
         print("Enter the valid number for provided option")
