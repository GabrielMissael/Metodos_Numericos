#include <iostream>
#include <stdio.h>
#include <math.h>

//METODO DE NEWTON

using namespace std;

double e = 2.71828182845, pi = 3.14159265359;

//Funcion sobre la que se hará el metodo de newthon-raphson f(x) = x - (g(x))/(g´(x))
double f(double x){
    double r;
    //SECCIÓN 2.2
    //ejemplo 1     r = x - ((cos(x)-x)/(-sin(x)-1));

    //SECCION 2.3
    //Ejemplo en clase      r = x - (600*pow(x, 4)-550*pow(x, 3)+200*pow(x, 2)-20*x-1)/(2400*pow(x, 3)-1650*pow(x, 2)+400*x-20);

    //EJERCICIOS
    //Ejercicio 1       r = x - (pow(x, 2)-6)/(2*x);

    //Ejercicio 5a      r = x - (pow(x, 3) - 2*pow(x, 2) - 5)/(3*pow(x, 2) - 4*x);
    //Ejercicio 5b      r = x - (pow(x,3)+3*pow(x, 2)-1)/(3*pow(x, 2)+6*x);
    //Ejercicio 5c      r = x - (x-cos(x))/(1+sin(x));
    //Ejercicio 5d      r = x - (x-0.8-0.2*sin(x))/(1-0.2*cos(x));

    //Ejercicio 11b     r = x - (2*x+3*cos(x)-pow(e, x))/(2-3*sin(x)-pow(e,x));

    //Ejercicio 13      r = x - ((2*pow(x, 3)+x-1)*sqrt(pow(x, 4)+pow(x, 2)-2*x+1))/(pow(x, 2)*(2*pow(x, 4)+3*pow(x, 2)-8*x+6));

    //Ejercicio 17     r = x - (230*pow(x,4) + 18*pow(x, 3) + 9*pow(x, 2) - 221*x-9)/(230*4*pow(x, 3) + 18*3*pow(x, 2) + 9*2*x - 221);

    //Ejercicio 21      r = x - (4*pow(x, 2) - pow(e, x) - pow(e, -x))/(8*x - pow(e, x) + pow(e, -x));

    //Ejercicio 23      r = x - (log(pow(x, 2)+1) - pow(e, 0.4*x)*cos(pi*x))/(2*x/(pow(x,2)+1) + pi*pow(e, 0.4*x)*sin(pi*x) - 0.4*pow(e, 0.4*x)*cos(pi*x));

    //Ejercicio 25      r = x - (20*x - pow(x, 2) + x*sqrt(20-x) + 20*sqrt(x) - x*sqrt(x) + sqrt(20*x - pow(x, 2)) -155.55)/(20-2*x-(x)/(2*sqrt(20-x)) + sqrt(20-x) + 10/sqrt(x) - sqrt(x)/2 + 1/(sqrt(20*x-pow(x,2)))*(20-2*x));

    //Ejercicio 27      r = x- (135000-(1000/x)*(1-pow(1+x, -30)))/(-1000/pow(x, 2)*(1-pow(x+1, -360) - 1000/x*(360*pow(x+1, -360))));

    //Ejercicio 29      r = x - (pow(3, 3*x+1) - 7*pow(5, 2*x))/(pow(3, 3*x+2)*log(3)-14*pow(25, x)*log(5));
    return r;
}


int main(){

    //se declaran variables para el programa
    /*
    tol --> tolerancia del error
    p --> variable para f(p0)
    p0 --> primera aproximación dada
    er --> error actual
    tope --> maximo numero de iteraciones
    n --> iteracion actual
    */
    double tol, p, p0, er;
    int n=1, tope;

    //Leo datos necesarios.
    printf ("METODO DE NEWTON \nEscribe p0, toleranica y numero maximo de iteraciones: \n");
    cin >> p0 >> tol >> tope;

    //Metodo de newton
    printf("N \t p \t \t  error \n");
    while(n<tope){
        //Obtengo el valor de p
        p = f(p0);

        //veo el error actual
        er = p0 - p;

        //Impprimo valores de n-esima iteracion

        if(n<10){
            printf("0%d \t %0.9f \t  %0.9f \n", n, p, er);
        }
        else{
            printf("%d \t %0.9f \t  %0.9f \n", n, p, er);
        }

        //printf("%0.9f \n", p);
        //Condicional de salida
        if(-1*tol < er && er < tol){
            printf("El valor de p es: %0.11f \n", p);
            double q = 20-p;
            cout << (p+sqrt(p))*(q+sqrt(q));
            return 0;
        }

        //sumo al contador
        n++;

        //Cambio el valor de p0
        p0 = p;
    }

    //Impprimo ultima iteracion
    if(n<10){
        printf("0%d \t %0.9f \t %0.9f \t %0.9f \n", n, p, p0, er);
    }
    else{
        printf("%d \t %0.9f \t %0.9f \t %0.9f \n", n, p, p0, er);
    }

    //Imprimo mensaje de error ya que no se llego a la presicion deseada
    cout << "El metodo fallo despues de " << n << " iteraciones";
    return 0;
}
