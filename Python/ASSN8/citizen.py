def accept():
    data={}
    n=int(input("How many data do you want to enter??"))
    for i in range(0,n):
        citizen=input("Enter name : ")
        age=int(input("Enter age : "))
        data[citizen]=age

    return data


data=accept()
cit=list(filter(lambda x:x if(data[x]>=18) else None,data.keys()))
print(cit)
