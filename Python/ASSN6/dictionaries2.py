
def accept():
    keys=[]
    value=[]
    i=1
    print("Enter 'exit' if you are done")
    while(True):
        var=input("Enter key {} :- ".format(i))
        if(var=="exit"):
            break
        else:
            keys.append(var)
            val=input("Enter value of key {} :- ".format(i))
            value.append(val)
            i+=1
    n=len(keys)
    first={keys[j]:value[j] for j in range(0,n)}
    return first

print("Enter the first dictionary:")
x=accept()
print("\nEnter the second dictionary:")
y=accept()
print("\nEnter the third dictionary:")
z=accept()
print()
print(f"dictionary 1 :- {x}\ndictionary 2 :- {y}\ndictionary 3 :- {z}")

d={}
d.update(x)
d.update(y)
d.update(z)
print("After adding all :- ",d)
