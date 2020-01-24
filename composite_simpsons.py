
import numpy as np
import matplotlib as plt
import math as mt

#EJERCICIO 1-------------------
#a
# a = 1
# b = 2
# n = 4
# def f(x):
# 	return x*mt.log(x)

#b
# a = -2
# b = 2
# n = 4
# def f(x):
# 	return x**3*mt.exp(x)

#c
# a = 0
# b = 2
# n = 6
# def f(x):
# 	return 1/(x**2+4)

#d
# a = 0
# b = mt.pi
# n = 6
# def f(x):
# 	return x**2*mt.cos(x)

#e
# a = 0
# b = 2
# n = 8
# def f(x):
# 	return mt.exp(2*x)*mt.sin(3*x)

#f
# a = 1
# b = 3
# n = 8
# def f(x):
# 	return x/(x**2+4)

#g
# a = 3
# b = 5
# n = 8
# def f(x):
# 	return 1/((x**2-4)**(1/2))

#h
# a = 0
# b = (3/8)*mt.pi
# n = 8
# def f(x):
# 	return mt.tan(x)

#EJERCICIO 2-------------------
#a
# a = -0.5
# b = 0.5
# n = 4
# def f(x):
# 	return mt.cos(x)**2

#b
# a = -0.5
# b = 0.5
# n = 6
# def f(x):
# 	return x*mt.log(x+1)

#c
# a = 0.75
# b = 1.75
# n = 8
# def f(x):
# 	return (mt.sin(x)**2-2*x*mt.sin(x)+1)

#d
# a = mt.e
# b = mt.e+2
# n = 8
# def f(x):
# 	return 1/(x*mt.log(x))

h = (b-a)/n

x = np.zeros(3)
x[0] = f(a)+f(b)
x[1] = 0
x[2] = 0

for i in range(n-1):
	g = a + (i+1)*h
	if i%2 == 1:
		x[2] = x[2] + f(g)
	else:
		x[1] = x[1] + f(g)

R = h*(x[0]+2*x[2]+4*x[1])/3

print(R)