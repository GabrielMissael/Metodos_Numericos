import numpy as np

#METODO DE GAUSS-SEIDEL

#Lectura de datos
N = input("Hola, introduce tu numero de ecuaciones:")
N=int(N)

#Declaro matrices y arreglos necesarios
mat = np.zeros((N, N))
b = np.zeros(N)
x = np.zeros(N)
XO = np.zeros(N)

#Leo la matriz
for i in range(N):
	for j in range(N):
		mat[i][j] = float(input(f"Entrada [{i}][{j}]: ")) 

#Leo las entradas b (parte derecha de las ecuaciones)
print("Introduce tus b:")
for i in range(N):
	b[i] = float(input(f"b[{i}]:"))

#Leo aproximaciones iniciales para las x
print("Introduce tus aproximaciones iniciales XO:")
for i in range(N):
	XO[i] = float(input(f"XO[{i}]"))

#Lea la tolerancia y maximo de iteraciones
TOL = float(input(f"Introduce la tolerancia: "))
M = float(input(f"Introduce el número maximo de iteraciones"))

#STEP 1
k = 1

#STEP 2
while k<=N:

	#STEP 3
	for i in range(N):
		sum1 = 0.0
		sum2 = 0.0
		for j in range(i-1):
			sum1 +=mat[i][j]*x[j]
		for j in range(i+1, N):
			sum2 += mat[i][j]*XO[j]
		x[i] = (-sum1-sum2+b[i])/mat[i][i]
	state = False

	#STEP 4
	if max(abs(x-XO))<TOL:
		print("The procedure was successful :)")
		print(x)
		exit()

	#STEP 5
	k = k+1

	#STEP 6
	x = XO

print("Maximum number of iteration exceeded")
exit()