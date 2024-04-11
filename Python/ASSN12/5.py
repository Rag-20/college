import numpy as np

matrix1=np.array([[1,2],[3,4]])

print("matrix1 is :\n",matrix1)
dim1=matrix1.shape

add=np.array([[0,0],[0,0]])
n=int(input("Enter the number to add: "))
for i in range(dim1[0]):
    for j in range(dim1[1]):
        add[i][j]=matrix1[i][j]+n
print("\nAddition is:\n",add)


sub=np.array([[0,0],[0,0]])
n=int(input("Enter the number to subtract: "))
for i in range(dim1[0]):
    for j in range(dim1[1]):
        sub[i][j]=matrix1[i][j]-n
print("\nSubtraction is:\n",sub)




sq=np.array([[0,0],[0,0]])
for i in range(dim1[0]):
    for j in range(dim1[1]):
        sq[i][j]=matrix1[i][j]*matrix1[i][j]
print("\nSquare is:\n",sq)

print("\nTranspose of matrix is:\n",np.transpose(matrix1))    
