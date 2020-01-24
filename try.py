import numpy as np
import math as math

N = 80
mat = np.zeros((N, N))
b = np.zeros(N)

for i in range(N):
	b[i] = math.pi
	for j in range(N):
		if i == j:
			mat[i][j]=i
		elif j == i+2 and i<78 or j == i-2 and i>2:
			mat[i][j] = 0.5*i
		elif j == i+4 and i>76 or j == i-4 and i>4:
			mat[i][j] = 0.25*i
		else:
			mat[i][j] = 0