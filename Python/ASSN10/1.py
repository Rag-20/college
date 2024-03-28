import csv

#accepting dictionary
def accept():
    dict1={}
    n = int(input("How many details do you want to enter?? : "))
    for i in range (n):
       e_mail = input("Enter doctor's email id : ")
       name = input("Enter doctor's name : ")
       dict1[e_mail]=name

    return dict1

data = accept()
print(data)


f = open("email.csv","w",newline="")
g = open("d_name.csv","w",newline="")
g1=csv.writer(g,delimiter=',')
f1=csv.writer(f,delimiter=',')

for i in data.keys():
    f1.writerow(i)

for i in data.values():
    g1.writerow(i)

g.close()
f.close()
