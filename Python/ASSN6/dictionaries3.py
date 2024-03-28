fruits_wala={"santre":10, "tarbooz":12, "aam":20}
search=[]
for key in fruits_wala.keys():
    search.append(key)

var=input("Enter a key to search in the list :- ")

n=len(search)
for i in range(0,n):
    if(var==search[i]):
        print("Found in the dictionary")
        flag=0
        break
    else:
        flag=1

if(flag==1):
    print("NOt found")

