import matplotlib.pyplot as mt
import numpy as np

list1=['first_yr','second_yr','third_yr']
dict1={}
for i in list1:
    n=int(input(f"Enter % of passing students in {i}: "))
    dict1[i]=n
    
x=np.array(list(dict1.keys()))
y=np.array(list(dict1.values()))

mt.pie(y, labels=x)
mt.title("Passing ratio")




mt.show()
