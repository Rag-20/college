import csv
import os

f = os.path.isfile("read_csv.csv")
if(f):
    f1 = open("read_csv.csv","r")
    if(f1.readable()):
        read = csv.reader(f1,delimiter=",")
        print(list(read))
    else:
        print("File not readable!!")

    f1.close()
else:
    print("File does not exists")
