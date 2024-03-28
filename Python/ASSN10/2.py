import csv

f = open("patients.csv","r",newline="")
f1 = list(csv.reader(f,delimiter=','))

for details in f1:
        print(f"patient name {details[0]} has income {details[1]}")

f.close()
