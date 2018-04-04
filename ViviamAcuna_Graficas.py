import numpy as np
import matplotlib.pyplot as plt

py=np.loadtxt(times_python.csv)
c_mas=np.loadtxt(times_cpp)

n1=py[:,0]
ti=py[:,1]

n2=c_mas[:,0]
ti2=c_mas[:,1]


plt.plot(ti,n1)

plt.plot(ti2,n2)
plt.savefig("cpp_vs_python.png")
