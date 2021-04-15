#include <iostream>
#include <string>
using namespace std;
 
//.h  exportar
class Contador {
 
    int num;    // Atributo
    string nome;
public:    
    // Metodos
    void comeca(string);
    void incrementa();
    int retorna_valor();
    void mostra();
};
 
//.cpp escondido
void Contador::comeca(string n) {
    num = 0;
    nome = n;
}

void Contador::incrementa() {
    num++;
}
int Contador::retorna_valor() {
    return num;
}
 
void Contador::mostra() {
    cout << endl << nome << ": " << retorna_valor();
}
 
// main uso
int main()
{
    Contador c1, c2; // objetos

    //c1.num = 0; // prog. estruturada
    c1.comeca("C1");
    c2.comeca("C2"); // mensagem

    c1.incrementa();
    c1.incrementa();
    c2.incrementa();

    c1.mostra();
    c2.mostra();

    c2.comeca("C2");
    c1.incrementa();
    c2.incrementa();
    c2.incrementa();

    c1.mostra();
    c2.mostra();    
}