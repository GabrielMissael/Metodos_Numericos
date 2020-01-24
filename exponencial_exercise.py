import numpy as np
import matplotlib as plt
import math as mt

x = np.zeros(5)
c = np.zeros(7)

def f(x):
	return mt.exp(x)

a = 0
b = 4
h = (b-a)/2
for i in range(5):
	x[i] = a+h*i
c[0] = (h/3)*(f(x[0])+4*f(x[1])+f(x[2]))

a = 0
b = 2
h = (b-a)/2
for i in range(5):
	x[i] = a+h*i
c[1] = (h/3)*(f(x[0])+4*f(x[1])+f(x[2]))

a = 2
b = 4
h = (b-a)/2
for i in range(5):
	x[i] = a+h*i
c[2] = (h/3)*(f(x[0])+4*f(x[1])+f(x[2]))

a = 0
b = 1
h = (b-a)/2
for i in range(5):
	x[i] = a+h*i
c[3] = (h/3)*(f(x[0])+4*f(x[1])+f(x[2]))

a = 1
b = 2
h = (b-a)/2
for i in range(5):
	x[i] = a+h*i
c[4] = (h/3)*(f(x[0])+4*f(x[1])+f(x[2]))

a = 2
b = 3
h = (b-a)/2
for i in range(5):
	x[i] = a+h*i
c[5] = (h/3)*(f(x[0])+4*f(x[1])+f(x[2]))

a = 3
b = 4
h = (b-a)/2
for i in range(5):
	x[i] = a+h*i
c[6] = (h/3)*(f(x[0])+4*f(x[1])+f(x[2]))

print(c[0])
print(c[1]+c[2])
print(c[3]+c[4]+c[5]+c[6])