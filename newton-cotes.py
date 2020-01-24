import numpy as np
import matplotlib as plt
import math as mt

#Defino arreglos donde guardo los resultados
c = np.zeros(4)
ce = np.zeros(4)
o = np.zeros(4)
oe = np.zeros(4)
x = np.zeros(5)

#Ejemplo 1
def f(x):
	return mt.sin(x)
R = 1-1/(2**(1/2))
a = 0
b = mt.pi/4

h = (b-a)/2
x[0] = a+h
o[0] = 2*h*f(x[0])

h = (b-a)/3
for i in range(5):
	x[i] = a+h*(i+1)
o[1] =  3*h/2*(f(x[0])+f(x[1]))

h = (b-a)/4
for i in range(5):
	x[i] = a+h*(i+1)
o[2] = (4*h/3)*(2*f(x[0])-f(x[1])+2*f(x[2]))

h = (b-a)/5
for i in range(5):
	x[i] = a+h*(i+1)
o[3] = (5*h/24)*(11*f(x[0])+f(x[1])+f(x[2])+11*f(x[3]))

h = (b-a)/1
for i in range(5):
	x[i] = a+h*i
c[0] = (h/2)*(f(x[0])+f(x[1]))

h = (b-a)/2
for i in range(5):
	x[i] = a+h*i
c[1] = (h/3)*(f(x[0])+4*f(x[1])+f(x[2]))

h = (b-a)/3
for i in range(5):
	x[i] = a+h*i
c[2] = (3*h/8)*(f(x[0])+3*f(x[1])+3*f(x[2])+f(x[3]))

h = (b-a)/4
for i in range(5):
	x[i] = a+h*i
c[3] = (2*h/45)*(7*f(x[0])+32*f(x[1])+12*f(x[2])+32*f(x[3])+7*f(x[4]))

#Calculo los errores
for i in range(4):
	ce[i] = abs(R - c[i])
	oe[i] = abs(R - o[i])

#Imprimo tabla
print("n \t\t 0 \t\t 1 \t\t 2 \t\t 3 \t\t 4")

print("Closed\t\t\t", end="\t")
for i in range(4):
	print("{:.6f}".format(c[i]), end="\t")

print("\nError\t\t\t", end="\t")
for i in range(4):
	print("{:.6f}".format(ce[i]), end="\t")

print("\nOpen\t", end="\t")
for i in range(4):
	print("{:.6f}".format(o[i]), end="\t")

print("\nError\t", end="\t")
for i in range(4):
	print("{:.6f}".format(oe[i]), end="\t")
