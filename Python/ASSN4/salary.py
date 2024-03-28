sal=[]
j=int(input("How many entries are you going to enter???"))
for i in range (0,j):
    salary=int(input("Enter the salary of employee"))
    sal.append(salary)

print("The salaries are:-\n")
j=0
for i in sal:
    j+=1
    print("{}.{}".format(j,i))

print("The maximum salary is:- ",max(sal))
print("The manimum salary is:- ",min(sal))
print("The average salary is:- ",sum(sal)/j)
