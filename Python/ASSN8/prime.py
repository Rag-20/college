def accept():
    n=int(input("How many numbers do you want to enter? : "))
    l1=[]
    for i in range(0,n):
        k=int(input("Enter a number: "))
        l1.append(k)

    return l1

def pno(i):
    f=0
    if(i==2 or i==3 or i==5):
        f=1
    else:
        for j in range(2,int(i/2)+1):
            if(i%j==0):
                f=0
                break
            else:
                f=1

    if (f==1):
        return True
    else:
        return False
    

data=accept()
print("The numbers are : ",data)
prime=list(filter(pno,data))
print("Prime numbers are: ",prime)
