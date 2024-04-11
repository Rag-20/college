import numpy as np

matrix1=np.array([[1,2],[3,4]])
matrix2=np.array([[0,0],[0,0]])
print("matrix1 is :\n",matrix1)
print("matrix2 is :\n",matrix2)

dim1=matrix1.shape
dim2=matrix2.shape

if(dim1[0]==dim2[0] and dim1[1]==dim2[1]):
    addition=np.add(matrix1,matrix2)
    print("addition is:\n",addition)

    sub=np.subtract(matrix1,matrix2)
    print("subtracttion is:\n",sub)
else:
    print("Entered matrix has different dimensions")

if(dim1[1]==dim2[0]):
    mul=np.dot(matrix1,matrix2)
    print("multiplication is:\n",mul)

    if(np.linalg.det(matrix2) != 0):
        print("divide matrix 1 wrt 2:\n")
        inv2=np.linalg.inv(matrix2)
        div=np.dot(matrix1,inv2)
        print(div)
    else:
        print("Cannot perform division as 2nd matrix has det 0")
else:
    print("dimension does not satisfy for mul or div")
