#natural_cubic_spline
import numpy as np

#READ AND SET
N = int(input("Introduce tu numero de puntos:"))
x = np.zeros(N+1)
h = np.zeros(N+1)
al = np.zeros(N+1)
l = np.zeros(N+1)
m = np.zeros(N+1)
z = np.zeros(N+1)
a = np.zeros(N+1)
b = np.zeros(N+1)
c = np.zeros(N+1)
d = np.zeros(N+1)

#Ejemplo
# x = [0, 1, 2, 3]
# a = [1, 2.71828182846, 7.38905609893, 20.0855369232]

#Ejericio 1
# x = [0, 1, 2]
# a = [0, 1, 2]

#Ejercicio 3a
# x = [8.3, 8.6]
# a = [17.56492, 18.50515]

#Ejercicio 3b
# x = [0.8, 1.0]
# a = [0.22363362, 0.65809197]

#Ejercicio 3c
# x = [-0.5, -0.25, 0.0]
# a = [-0.02475, 0.3349375, 1.101]

#Ejericicio 3d
x = [0.1, 0.2, 0.3, 0.4]
a = [-0.62049958, -0.28398668, 0.00660095, 0.24842440]

# for i in range(N):
# 	x[i] = float(input(f"x[{i}]: "))
# for i in range(N):
# 	a[i] = float(input(f"a[{i}]: "))

#STEP 1
for i in range(N):
	h[i] = x[i+1]-x[i]

#STEP 2
for i in range(1, N):
	al[i] = 3/h[i]*(a[i+1]-a[i]) - 3/h[i-1]*(a[i]-a[i-1])

#STEP 3
l[0] = 1
m[0] = 0
z[0] = 0

#STEP 4
for i in range(1, N):
	l[i] = 2*(x[i+1]-x[i-1]) - h[i-1]*m[i-1]
	m[i] = h[i]/l[i]
	z[i] = (al[i]-h[i-1]*z[i-1])/l[i]

#STEP 5
l[N] = 1
z[N] = 0
c[N] = 0

#STEP 6
for j in range(N-1,-1,-1):
	c[j] = z[j] - m[j]*c[j+1]
	b[j] = (a[j+1] - a[j])/h[j] -h[j]*(c[j+1]+2*c[j])/3
	d[j] = (c[j+1] - c[j])/(3*h[j])


for i in range(N):
	print()
	print(f"spline {i+1}:")
	print(f"a[{i}]: {a[i]}\nb[{i}]: {b[i]}\nc[{i}]: {c[i]}\nd[{i}]: {d[i]}")
	print(f"{a[i]} + (x-{x[i]})*{b[i]} + (x-{x[i]})^2*{c[i]} + (x-{x[i]})^3*{d[i]}")
