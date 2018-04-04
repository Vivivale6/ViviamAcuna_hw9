import numpy as np
import time

N=36
#Funcion de Fibonacci
def fibonacci(N):
    if (N==0 or  N==1):
        return N
    else:
        return fibonacci(N-1) + fibonacci(N-2)
#Funcion que da el tiempo
def get_time(N):
    t0 = time.time()
    
# SOME CODE THAT TAKES TIME
    fibonacci(N)
    t1 = time.time()-t0
    return t1
for i in range(N):
    print i,get_time(i)
