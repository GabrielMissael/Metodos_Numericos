#include <iostream>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;

//Funciones sobre las que se aplicará el metodo de punto fijo
double g(double x, int aux){
    double r;

    //Funciones para ejemplo 1
    /*
    switch (aux){
        case 1:
            r = x - pow(x, 3) - 4*pow(x, 2) + 10;
        break;

        case 2:
            r = sqrt(10/x - 4*x);
        break;

        case 3:
            r = 0.5*sqrt(10 - pow(x, 3));
        break;

        case 4:
            r = sqrt(10/(4+x));
        break;

        case 5:
            r = x - (pow(x, 3)+4*pow(x, 2)-10)/(3*pow(x, 2) + 8*x);
        break;
    }
    */

    //Ejerciccio 3a
    r = (20*x+21/x)/21;
    return r;
}

int main(){

    //Declaro un contador, un max de iteraciones, una variable para evaluar p, p en si mismo y una tolerancia
    int n=1, tope;
    double P0=0, tol=0, p=0, p0=0;

    //Leo p aproximacion inicia, tolerancia y tope
    cout << "Introduzca p0, la tolerancia de precisión y el tope: \n";
    cin >> P0 >> tol >> tope;

    for(int i=1 ; i<5+1 ; i++){
        n = 1;
        p0 = P0;
        printf("\n \n");
        while (n<tope){
            p = g(p0, i);
            printf("%i %i %0.9f %0.9f \n", i, n, p, p0);
            if((p-p0)>-1*tol && (p-p0)<tol){
                cout << "Resultado: " << p << "\n";
                break;
            }
            n++;
            p0 = p;
        }
        if(n==tope-1){
        cout << "El metodo fallo despues de " << n << " iteraciones";
        }
    }

    return 0;
}
