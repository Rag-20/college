def accept():
    key=[]
    value=[]
    i=1
    print("Enter 'exit' if you are done")
    while(True):
        var=input("Enter expertise of doctor {} :- ".format(i))
        if(var=="exit"):
            break
        else:
            key.append(var)
            val=input("Enter the contaact of doctor {} :- ".format(i))
            value.append(val)
            i+=1
    n=len(key)
    first={key[j]:value[j] for j in range(0,n)}
    return first

def emergency(data,eme):
    for i in data.keys():
        if eme==i:
            print("Emergency contact is : ",data[i])
    



data=accept();
eme=input("What expertise are you looking for in a doctor? :- ");
emergency(data,eme)
