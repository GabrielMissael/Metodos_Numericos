#include <iostream>
#include <bits/stdc++.h>

//METODO DE LA POSICION FALSA

double e = 2.71828182845;

using namespace std;

//En este caso f(x) = g(x)
double f(double x){
    double r;

    //Ejemplo en clase      r = 600*pow(x, 4) - 550*pow(x, 3) + 200*pow(x, 2) - 20*x -1;

    //EJERCICIOS
    //Ejercicio 2       r = pow(x, 2)-6;


    //Ejercicio 7a      r = pow(x,3) - 2*pow(x, 2)-5;
    //Ejercicio 7b      r = pow(x, 3) + 3*pow(x,2)-1;
    //Ejercicio 7c      r = x-cos(x);
    //Ejercicio 7d      r = x - 0.8 - 0.2*sin(x);

    //Ejercicio 11b     r = 2*x + 3*cos(x) - pow(e, x);

    //Ejercicio 17      r = 230*pow(x, 4) + 18*pow(x, 3) +9*pow(x, 2) - 221*x -9;

    return r;
}

int main() {

    cout << "METODO DE LA POSICION FALSA \n";
    cout << "Introduce po, p1 (dos aproximaciones), tolerancia y numero maximo de iteraciones: \n";

    double p0, p1, q0, q1, tol, p, er, q;
    int pos=2, N;

    cin >> p0 >> p1 >> tol >> N;

    printf ("N \t \t p \t er \n");
    q0 = f(p0);
    q1 = f(p1);

    while(pos <= N){
        p = p1 - q1*((p1-p0)/(q1-q0));
        er = p-p1;

        if (pos<10){
            printf ("0%i \t %0.9f \t %0.9f \n", pos, p, er);
        }
        else{
            printf ("%i \t %0.9f \t %0.9f \n", pos, p, er);
        }

        //printf("%0.9f \n", p);

        if(-tol<er & er<tol){
            cout << "El resultado es: " << p;
            return 0;
        }

        pos++;
        q = f(p);

        if(q*q1<0){
            p0 = p1;
            q0 = q1;
        }

        p1 = p;
        q1 = q;
    }

    cout << "El metodo fallo despues de " << N << " iteraciones";

    return 0;
}
