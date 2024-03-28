import csv

fields = ["Institute Name","Year of Establishment","Principal's name"]

fields = ["Institute Name","Year of Establishment","Principal's name"]
f = open("Dict_writer.csv","w",newline="")
f1 = csv.DictWriter(f,fieldnames=fields)
f1.writeheader()
for i in range (0,3):
    print(f"\nEnter dictionary {i+1} :-")
    dict1 = {}
    dict1[fields[0]] = input("Enter Institute Name : ")
    dict1[fields[1]] = int(input("Enter Year of Establishment : "))
    dict1[fields[2]] = input("Enter Principal's name : ")

    f1.writerow(dict1)

    

f.close()
