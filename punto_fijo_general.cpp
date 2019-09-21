#include <iostream>
#include <bits/stdc++.h>
#include <math.h>

using namespace std;

double pi = 3.14159265359, e = 2.718281828;

//Funciones sobre las que se aplicará el metodo de punto fijo
double g(double x){
    double r;

    //Ejerciccio 3a     r = (20*x+21/pow(x, 2))/21;
    //Ejercicio 3b      r = x - (pow(x, 3)-21)/(3*pow(x, 2));
    //Ejercicio 3c      r = x - (pow(x, 4)-21*x)/(pow(x, 2)-21);
    //Ejercicio 3d      r = pow((21/(x)), 0.5);

    //Ejercicio 5       r = pow((3*pow(x, 2)+3), 0.25);

    //Ejercicio 7       r = pi + 0.5*sin(x/2);

    //Ejercicio 9       r = 0.5*(3/x+x);

    //Ejercicio 11a     r = (2-pow(e, x)+pow(x,2))/3;
    //Ejercicio 11b     r = 5/pow(x,2) + 2;
    //Ejercicio 11c     r = pow((pow(e, x)/3), 0.5);
    //Ejercicio 11d     r = pow(5, -x);
    //Ejercicio 11e     r = pow(6, -x);
    //Ejercicio 11f     r = 0.5*(sin(x)+cos(x));

    //Ejercicio 13a     r = acos(pow(x, 2)/(-10));
    //Ejercicio 13b     r = sqrt(-10*cos(x));

    //Ejercicio 15      r = (1/pi)*asin(-x/2)+2;

    //Ejercicio 23      r = 6.230183401-2.5*pow(e, -0.4*x);
    return r;
}

int main(){

    //Declaro un contador, un max de iteraciones, una variable para evaluar p, p en si mismo y una tolerancia
    int n=1, tope;
    double tol=0, p=0, p0=0;

    //Leo p aproximacion inicia, tolerancia y tope
    cout << "Introduzca p0, la tolerancia de precision y el tope: \n";
    cin >> p0 >> tol >> tope;

    while (n<tope){
        p = g(p0);
        if(n<10){
            printf("0%i \t", n);
        }
        else{
           printf("%i \t", n);
        }

        printf("%0.9f \t", p);
        printf("%0.9f \t", p0);
        printf("%0.9f \t", p-p0);
        cout << "\n";
        if((p-p0)>-1*tol && (p-p0)<tol){
            cout << "Resultado: " << p << "\n";
            return 0;
        }
        n++;
        p0 = p;
    }
    cout << "El metodo fallo despues de " << n << " iteraciones";

    return 0;
}
