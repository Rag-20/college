def accept():
    key=[]
    i=1
    print("Enter 'exit' if you are done")
    while(True):
        var=(input("Enter the age :- ".format(i)))
        if(var=="exit"):
            break
        else:
            key.append(var)
    return key

def dupli(data):
    n=len(data)
    final=[]
    for i in data:
        if i not in final:
            final.append(i)
        
    print(final)

data=accept()
dupli(data)
