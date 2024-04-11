import matplotlib.pyplot as mt
import numpy as np

x = np.array([3,4,2,3,4])
y = np.array([6,5,1,2,3])

#mt.scatter(x,y)
mt.title("Trial")
mt.xlabel("X axis")
mt.ylabel("Y axis")

mt.bar(x,y)

#mt.hist(x)
mt.show()
