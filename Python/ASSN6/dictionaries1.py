fruits_wala={"santre":12, "tarbooz":20, "aam":10}

print("Before Sorting:",fruits_wala)

val=sorted(fruits_wala.values(),reverse=True)
print(val)

n=len(val)
key=[]
for i in range (0,n):
    for j in fruits_wala.keys():
       if(fruits_wala[j]==val[i]):
           key.append(j)

print(key)

updated={i:fruits_wala[i] for i in key}
print("After Sorting:",updated)




