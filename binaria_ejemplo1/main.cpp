#include <iostream>
#include <bits/stdc++.h>
#include <math.h>

//BUSQUEDA BINARIA

using namespace std;

double pi=3.14159265359, e=2.71828182846;

//Funcion sobre la que se hará la busqueda binaria
double f(double x){
    double r;
    //ejemplo 1     r = (pow(x, 3))+4*pow(x, 2)-10;

    //ejercicio 1       r = sqrt(x)-cos(x);

    //ejercicio 3       r = pow(x, 3) - 7*pow(x, 2) + 14*x - 6;

    //ejercicio 5a      r = x - pow(2, -x);
    //ejercicio 5b      r = pow(e, x) - pow(x, 2) + 3*x - 2;
    //ejercicio 5c      r = 2*x*cos(2*x) -pow((x + 1), 2);
    //ejercicio 5d      r = x*cos(x) - 2*pow(x, 2) + 3*x - 1;

    //ejercicio 7       r = 2*sin(x) - x;

    //ejercicio 9       r = pow(e, x) - 2 - cos(pow(e, x)-2);

    //ejercicio 11      r = (x+2)*(x+1)*x*pow(x-1, 3)*(x-2);

    //ejercicio 13      r = pow(25.0, pow(3, -1)) - x;

    //ejercicio 15      r = pow(x, 3) + x - 4;

    //ejercicio 19      r = 10*( 0.5*pi*pow(1,2) - pow(1, 2)*asin(x/1) - x*sqrt(pow(1, 2)-pow(x, 2)) );

    //SECCION 2.3
    //Ejemplo en clase

    r = 600*pow(x, 4)-550*pow(x, 3)+200*pow(x, 2)-20*x-1;
    return r;
}


int main(){

    //Variables para tolerancia del resultado, el intervalo, el punto intermedio
    //el numero de iteraciones, el max de iteraciones y otra para el f(p), f(a) y f(b) actual.
    double tol, a, b, p, posP, posA, posB, valor;
    int n=1, tope;

    //Leo intervalo, tolerancia y el tope de iteraciones.
    printf ("BUSQUEDA BINARIA \n Escribe a, b, toleranica, maximo de iteraciones y que valor de la funcion quieres: \n");
    cin >> a >> b >> tol >> tope >> valor;

    //Obtengo el primer punto medio
    p = (a + b)/2;

    //Veo el resultado actual
    posP = f(p);
    posA = f(a);
    posB = f(b);

    //Busqueda binaria de la raiz
    printf("N \t A \t \t B \t \t \P_n \t \t f(P_n) \n");
    while(n<tope){

        if(n<10){
            printf("0%d \t %0.9f \t %0.9f \t %0.9f \t %0.9f \n", n, a, b, p, posP);
        }
        else{
            printf("%d \t %0.9f \t %0.9f \t %0.9f \t %0.9f \n", n, a, b, p, posP);
        }

        //printf("%0.9f \n", p);

        //Condicional de salida
        if(-1*tol<(posP-valor) && (posP-valor)<tol){
            printf("El valor de p es: %0.11f", p);
            return 0;
        }

        //sumo al contador
        n++;

        //Cambio el valor de a o de b
        if((posA > valor && posP > valor) || (posA < valor && posP < valor)){
            a = p;
        }
        else{
            b = p;
        }

        //Obtengo p y evaluo de nuevo
        p = (a + b)/2;
        posP = f(p);
        posA = f(a);
        posB = f(b);
    }

    if(n<10){
            printf("0%d \t %0.9f \t %0.9f \t %0.9f \t %0.9f \n", n, a, b, p, posP);
    }
    else{
        printf("%d \t %0.9f \t %0.9f \t %0.9f \t %0.9f \n", n, a, b, p, posP);
    }

    //Imprimo mensaje de error
    cout << "El metodo fallo despues de " << n << " iteraciones";
    return 0;
}
