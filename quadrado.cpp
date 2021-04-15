#include <iostream>
#include <math.h>
using namespace std;

class quadrado {

    //atributo
    double lado;
    
    public:
    //metodo
    quadrado (double);
    double area ();
    double perimetro();
    double diagonal ();
    void mostra();

};

int main (){


    return 0;
}

//construtor
quadrado::quadrado(double a){
    lado = a;
}


double quadrado::area (){
    return pow(lado,2);
}

double quadrado::perimetro(){
    return lado*4;
}

double quadrado::diagonal(){
    return pow((2*pow(lado,2)),(1/2));
}

void quadrado::mostra (){
    cout << "o lado do quadrado e = " << lado;
}