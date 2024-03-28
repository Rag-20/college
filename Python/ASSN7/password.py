def accept():
    key=[]
    value=[]
    i=1
    print("Enter 'exit' if you are done")
    while(True):
        var=input("Enter employee last-name :- {}.".format(i))
        if(var=="exit"):
            break
        else:
            key.append(var)
            val=input("Enter the birthyear of {} :- ".format(var))
            value.append(val)
            i+=1
    n=len(key)
    first={key[j]:value[j] for j in range(0,n)}
    return first

data=accept()

def password(data):
    passli=[]
    for key in data:
        a=f"EMP{key}"
        a=a+f"@{data[key]}"
        passli.append(a)

    print(passli)

password(data)
