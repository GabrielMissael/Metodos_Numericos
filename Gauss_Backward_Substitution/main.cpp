#include <iostream>

using namespace std;

int N;
double ecuacion[1000][1000];

int minimo(int a){
    int r=0;
    double pos = ecuacion[0][a];
    for (int i = 1 ; i<N ; i++){
        if((ecuacion[i][a] < pos && ecuacion[i][a]!=0) || (pos = 0)){
            r = i;
            pos = ecuacion[i][a];
        }
    }
    return r;
}

void change(int a, int b){
    double aux;
    for(int j =0 ; j<N ; j++){
        aux = ecuacion[a][j];
        ecuacion[a][j] = ecuacion[b][j];
        ecuacion[b][j] = aux;
    }
}

void suma(int a, int b, double c){
    for(int j =0 ; j<N ; j++){
        ecuacion[a][j] = ecuacion[a][j] - c*ecuacion[b][j];
    }
}

void imprimir(){
    for(int i = 0 ; i<N ; i++){
        for(int j=0 ; j<N ; j++){
            cout << ecuacion[i][j] << "\t";
        }
        cout << "\n";
    }
}

int main()  {

    int p;
    double m;

    cout << "Gaussian Elimination with Backward Substitution \n";
    cout << "Introduzca número de ecuaciones N: ";
    cin >> N;
    cout << "Introduzca n(n+1) coeficientes: \n";

    for(int i = 0 ; i<N ; i++){
        for (int j = 0 ; j<N+1 ; j++){
            cin >> ecuacion[i][j];
        }
    }

    for(int i = 0 ; i<N-1 ; i++){
        p = i;
        while(ecuacion[p][i]==0 && p<N){
            p++;
        }
        if(ecuacion[p][i]==0 || p==N){
            cout << "No existe una solucion unica \n";
            return 0;
        }
        if(p!=i){
            change(i, p);
        }
        for(int j=i+1 ; j<N ; j++){
            m = ecuacion[j][i]/ecuacion[i][i];
            suma (j, i, m);
        }
    }

    if(ecuacion[N-1][N-1]==0){
        cout << "No existe una solucion unica \n";
        return 0;
    }

    imprimir();

    return 0;
}
