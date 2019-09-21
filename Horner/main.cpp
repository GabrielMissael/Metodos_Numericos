#include <iostream>
#include <bits/stdc++.h>

//METODO NEWTON CON HORNER

using namespace std;


int main() {

    int N, M, pos=1;
    double a[1000], y, z, tol, p0, p, er;

    cout << "METODO DE NEWTON CON HORNER\n";
    cout << "Introduce N (grado del polinomio): \n";
    cin >> N;
    cout << "Introduce los N coeficientes a0, a1, ...,an: \n";

    for (int i=0 ; i<N+1 ; i++){
        cout << "a" << i << "= ";
        cin >> a[i];
    }

    cout << "Introduce p0, tolerancia buscada y numero maximo de iteraciones: \n";
    cin >> p0 >> tol >> M;

    while (pos < M){
        //Horner para hayar f(p0) y f´(p0)

        y = a[N+1];
        z = a[N+1];

        for(int i=N; i>0 ; i--){
            y = p0*y+a[i];
            z = p0*z+y;
        }
        y = p0*y+a[0];

        //Regresamos a newton
        p = p0 - (y/z);

        er = p0 - p;

        //Impprimo valores de n-esima iteracion

        if(pos<10){
            printf("0%d \t %0.9f \t %0.9f \t %0.9f \n", pos, p, p0, er);
        }
        else{
            printf("%d \t %0.9f \t %0.9f \t %0.9f \n", pos, p, p0, er);
        }

        //printf("%0.9f \n", p);

        //Condicional de salida
        if(-1*tol < er && er < tol){
            printf("El valor de p es: %0.11f", p);
            return 0;
        }

        //sumo al contador
        pos++;

        //Cambio el valor de p0
        p0 = p;
    }

    //Impprimo ultima iteracion
    if(pos<10){
        printf("0%d \t %0.9f \t %0.9f \t %0.9f \n", pos, p, p0, er);
    }
    else{
        printf("%d \t %0.9f \t %0.9f \t %0.9f \n", pos, p, p0, er);
    }

    //Imprimo mensaje de error ya que no se llego a la presicion deseada
    cout << "El metodo fallo despues de " << M << " iteraciones";
    return 0;
}
