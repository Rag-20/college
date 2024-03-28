def accept():
    key=[]
    value=[]
    i=1
    print("Enter 'exit' if you are done")
    while(True):
        var=input("Enter employee name {} :- ".format(i))
        if(var=="exit"):
            break
        else:
            key.append(var)
            val=input("Enter the salary of {} :- ".format(i))
            value.append(val)
            i+=1
    n=len(key)
    first={key[j]:value[j] for j in range(0,n)}
    return first

def max_sal(a):
    key=[]
    val=max(a.values())
    print("maximum salary is : ",val)
    for j in a.keys():
       if(a[j]==val):
           key.append(j)

    return key


data=accept()
info=max_sal(data)
print("\nEmployee having maximum salary is : ",info)

