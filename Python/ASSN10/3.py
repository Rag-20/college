import csv

list1 = [ ["Virat","Kohli"],["Mahendra","Dhoni"],["Yuvraj","Singh"],["Jitesh","Sharma"] ]

f = open("desgn.csv","w",newline="")
f1 = csv.writer(f)
f1.writerows(list1)
f.close()
