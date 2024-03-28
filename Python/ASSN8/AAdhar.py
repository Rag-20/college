def accept():
    data={}
    n=int(input("How many value do you want to enter??: "))
    for i in range(0,n):
        var=input("Enter adhaar card number: ")
        sal=int(input("Enter birth-year : "))
        data[var]=sal
    return data

data=accept()
print("The details of aadhar are: ",data)
scheme=list(filter(lambda x:x if((2024-x)>=65) else None,data.values()))
print("People eligible for schemes are with card number:-\n",scheme)
