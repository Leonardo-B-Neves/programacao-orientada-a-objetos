//caxa
#include <iostream>
#include <cstdio>
//#include <cmanip> //comndos setw, setprecision
//#include <iomanip>
using namespace std;

class caixa {
    double altura;
    double largura;
    double profundidade;
    double areaT;    
    public:
    //construtor
    caixa(double a, double l, double p){
        
     	altura = a;
        largura = l;
        profundidade = p;
        areaT= 2*a*l+2*a*p+2*p*l;

    }
    void mostra_tudo(){
        cout << "os paremetros altura largura profundidade e area total sao respectivamente\n";
        cout << altura << "\n" << largura << "\n" << profundidade <<"\n"<< areaT;
    }
    void mostra_areaT(){
        cout << areaT;
    }
};


int main (){

    caixa c1(3.70,5.80,2.50);
    c1.mostra_areaT();
    cout << "\nmostrando tudo";
    c1.mostra_tudo();

    return 0;
}
