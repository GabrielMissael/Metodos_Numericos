#include <bits/stdc++.h>

using namespace std;

double e =2.71828, pi = 3.14159265359;

int main()  {
    for (double i=0 ; i<50 ; i+=0.01){
        cout << log(pow((i),2)+1) << " " << pow(e, 0.4*(i))*cos(pi*(i)) << "\n";
    }
    return 0;
}
