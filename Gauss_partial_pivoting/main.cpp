#include <iostream>

using namespace std;

int main()  {

    int N;
    double ecuacion[1000][1000];

    cout << "Gaussian Elimination with Partial Pivoting \n";
    cout << "Introduzca número de ecuaciones N: ";
    cin >> N;
    cout << "Introduzca nx(n+1) coeficientes: \n";

    for(int i = 0 ; i<N ; i++){
        cout << "1: \t";
        for (int j = 0 ; j<N+1 ; j++){
            cin >> ecuacion[i][j];
        }
    }



    return 0;
}
