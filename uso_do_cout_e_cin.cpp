#include <iostream> //cin cout = scanf e printf em c++
#include <iomanip>// setw()/*seta um numero de caracteres de um numero*/
using namespace std;//para não ter que colocar o std nos comandos

int main (){
    int a,b;
    cout << "entre com 2 numeros\n";
    cin >> a >> b; //scanf
    cout << "os numeros que voce digitol foram:\n";
    cout << a << endl /*pula linha*/ << b; //printf

    return 0;
}
