#include <stdio.h>

int main(){

    double x, TOL;
    int M;

    scanf("%lf %lf %i", &x, &TOL, &M);

    int N = 1, sign = -1;
    double y = x-1, sum = 0;
    double power = y, term = y;

    while (N<=M){
        sign = -sign;
        sum = sum + sign*term;
        power = power*y;
        term = power/(N+1);
        //printf ("%0.9f %0.9f \n", sum, term);
        if (term < TOL){
            printf("%i \n", N);
            return 0;
        }
        N++;
    }

    printf("Method Failed \n");

    return 0;
}
