import csv
import os
str1 = input("Enter a string to write into csv file")
f1 = open("write_csv.csv","w")
f = os.path.isfile("write_csv.csv")
if(f):
    if(f1.writable()):
         wrt = csv.writer(f1,delimiter=",")
         wrt.writerow(str1)
    else:
         print("File not writable!!")

else:
    print("File does not exists")


f1.close()
