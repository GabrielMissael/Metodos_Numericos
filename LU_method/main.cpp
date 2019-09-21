#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//Esta funcion resuelve un sistema triangular de ecuaciones
double *sustitucion(double **mat, int n, bool con){
    double *equis, aux;
    equis = (double*)malloc(n*sizeof(double));

    //Esta resuelve upper triangular
    if(con==0){
        equis[n-1] = mat[n-1][n]/mat[n-1][n-1];
        for(int i=n-2; i>=0 ; i--){
            aux = mat[i][n];
            for(int j=n-1 ; j>i ; j--){
                aux -= equis[j]*mat[i][j];
            }
            equis[i] = aux/mat[i][i];
        }
    }
    //Esto resuelve lower triangular
    else{
        equis[0] = mat[0][n]/mat[0][0];
        for(int i=1 ; i<n ; i++){
            aux = mat[i][n];
            for(int j=0 ; j<i ; j++){
                aux -= equis[j]*mat[i][j];
            }
            equis[i] = aux/mat[i][i];
        }
    }

    return equis;
}

//Esta funcion imprime una matriz de n*n
void imprime(double **matriz, int n){
    for(int i = 0 ; i < n ; i++){
        for (int j=0 ; j < n ; j++){
            if(matriz[i][j]<0){
                printf("%0.5f \t", matriz[i][j]);
            }
            else{
                printf("%0.6f \t", matriz[i][j]);
            }
        }
        printf("\n");
    }
    cout << "\n";
}

//Esta funcion lee una matriz de n*n
double **leeM(int n){
    double **mat;
    mat = (double**)malloc(n*sizeof(double));
    for(int i = 0 ; i<n ; i++){
        mat[i] = (double*)malloc((n+1)*sizeof(double));
    }

    for(int i = 0 ; i<n ; i++){
        for(int j = 0 ; j<n+1 ; j++){
            cin >> mat[i][j];
        }
    }
    return mat;
}

double **matriz(int N){
    double **mat;
    mat = (double**)malloc(N*sizeof(double));
    for(int i = 0 ; i<N ; i++){
        mat[i] = (double*)malloc((N+1)*sizeof(double));
    }

    for(int i=0 ; i<N ; i++){
        for(int j=0 ; j<N+1 ; j++){
            mat[i][j] = 0;
        }
    }
    return mat;
}

int main(){

    double **matU, **matA, **matL, *solucionY, *solucionX;
    int N;

    cout << "METODO LU \n";
    cout << "Introduzca el tamano de la matriz N: ";
    cin >> N;

    solucionY = (double*)malloc(N*sizeof(double));
    solucionX = (double*)malloc(N*sizeof(double));

    matA = matriz(N);
    matU = matriz(N);
    matL = matriz(N);

    matA = leeM(N);

    for(int i = 0 ; i<N ; i++){
        matL[i][N] = matA[i][N];
    }

    //STEP 1
    matL[0][0] = 1;
    matU[0][0] = matA[0][0];
    if(matU[0][0]==0){
        cout << "Factorization impossible \n";
        return 0;
    }

    //STEP 2
    for( int j = 1 ; j<N ; j++){
        matU[0][j] = matA[0][j]/matL[0][0];
        matL[j][0] = matA[j][0]/matU[0][0];
    }

    double sum1 = 0, sum2=0 ;
    //STEP 3
    for (int i = 1 ; i<N-1 ; i++){
        //STEP 4
        sum1 = 0;
        for(int k = 0 ; k<i ; k++){
            sum1 += matL[i][k]*matU[k][i];
        }
        matL[i][i] = 1;
        matU[i][i] = matA[i][i] - sum1;
        if(matU[i][i]==0){
            cout << "Factorization impossible \n";
            return 0;
        }
        //STEP 5
        for(int j=i+1 ; j<N ; j++){
            sum1 = 0;
            sum2 = 0;
            for(int k = 0 ; k<i ; k++){
                sum1 += matL[i][k]*matU[k][j];
                sum2 += matL[j][k]*matU[k][i];
            }
            matU[i][j] = (matA[i][j]-sum1);
            matL[j][i] = (matA[j][i]-sum2)/matU[i][i];
        }
    }

    //STEP 6
    sum1=0;
    matL[N-1][N-1] = 1;
    for(int k = 0 ; k<N-1 ; k++){
        sum1 += matL[N-1][k]*matU[k][N-1];
    }
    matU[N-1][N-1] = matA[N-1][N-1] - sum1;

    imprime(matL, N);
    imprime(matU, N);

    solucionY = sustitucion(matL, N, 1);

     for(int i = 0 ; i<N ; i++){
        matU[i][N] = solucionY[i];
    }

    cout << "\n";
    for(int i = 0 ; i<N ; i++){
        cout << solucionY[i] << " ";
    }
    cout << "\n";

    solucionX = sustitucion(matU, N, 0);

    cout << "\n";
    for(int i = 0 ; i<N ; i++){
        cout << solucionX[i] << " ";
    }
    cout << "\n";

    return 0;
}
