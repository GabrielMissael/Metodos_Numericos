import numpy as np
import matplotlib as plt
import math as mt

#TRAPEZOIDAL RULE and SIMPSON´S RULE

#Función a integrar
#A
# x0 = 0.5
# x1 = 1
# def f(x):
#     return x**4

#B
# x0 = 0
# x1 = 0.5
# def f(x):
#     return 2/(x-4) 

# #C
# x0, x1 = 1, 1.5
# def f(x):
#     return mt.log(x)*x**2

# D
# x0, x1 = 0, 1
# def f(x):
#     return mt.exp(x)*x**2

# #E
# x0, x1 = 1, 1.6
# def f(x):
#     return (2*x)/(x**2-4)

#F
# x0, x1 = 0, 0.35
# def f(x):
# 	return 2/(x**2-4)

# #G 
# x0 , x1 = 0, np.pi/4
# def f(x):
# 	return x*mt.sin(x)

#H
x0 ,x1 = 0, mt.pi/4
def f(x):
	return mt.sin(2*x)*mt.exp(3*x)

h = x1-x0

#Trapecio
T = h/2*(f(x0) + f(x1))

#simpson
S = h/6*(f(x0) + 4*f((x0+x1)/2) + f(x1))

print(f"Trapecio: {T} \nSimpson: {S}")
    