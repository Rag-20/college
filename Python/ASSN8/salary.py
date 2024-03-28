def accept():
    data={}
    print("Designations:-manager, trainee, jr. software engineer, sr. software engineer")
    for i in range(0,2):
        var=input("Enter employee designation : ")
        if(var.lower()=="manager" or "trainee" or "jr. software engineer" or "sr. software engineer"):
            sal=int(input("Enter salary : "))
            data[var]=sal
        else:
            print("enter valid designation")
    return data

def update(x):
    if(x.lower()=="manager"):
        val=data[x]*0.1+data[x]
        data[x]=val
        return True
        
data=accept()
update=list(filter(update,data.keys()))
print("updated salary is:\n",data)                   
