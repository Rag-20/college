import matplotlib.pyplot as mt
import numpy as np

list1=['1st','2nd','3rd','4th']
list2=[]
for i in list1:
    print(f"ENter sale in {i} quater")
    n=int(input())
    list2.append(n)

x=np.array(list1)
y=np.array(list2)

mt.bar(x,y)
mt.title("Sales")
mt.xlabel("Quaters")
mt.ylabel("Sales in %")

mt.bar(x,y)

mt.show()
