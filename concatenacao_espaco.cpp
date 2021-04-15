#include <iostream> //cin cout = scanf e printf em c++
#include <string>// manipula strings em c++
using namespace std;//para não ter que colocar o std nos comandos

int main (){
    string s1="ola " , s2 ="mundo " , s3;
    char s4[100];
    cout << endl << s1 << s2;
    s3 = s1 + s2;
    cout << endl << s3 << endl;
    cin.getline (s4,100);
    cout << s4;

    return 0;
}