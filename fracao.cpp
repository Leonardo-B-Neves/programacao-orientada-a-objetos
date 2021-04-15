#include <cstdio> // printf
#include <iostream> // cout
using namespace std;

class fracao {
    
    //atributos
    int num,den;
    
    //metodo
    public:
    fracao (int , int);
    double soma ();
    void mostra ();

};

//texte das funçoes
int main (){
    int n,d;
    double g;
    cout << "registre o primeiro numeros\n";
    cin >> n >> d;
    fracao c1(n,d);
    g = c1.soma ();
    c1.mostra();
    cout << "\na soma de g e = " << g << "\n";
    system("pause");

    return 0;
}

//função que cria a fração
fracao::fracao (int n, int d){

    num = n;
    den = d;
    
}

//soma as duas frações
double fracao::soma() {
    
    return (num/(double)den)+(den/(double)num);
}

//mostras as frações
void fracao::mostra(){
    cout << "\nos numeros na fracao sao\n" ;
    cout << num << "/" << den << "\n" << den << "/" << num;
}

