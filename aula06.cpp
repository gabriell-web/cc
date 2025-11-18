#include <iostream>
using namespace std;

int n1, n2; //variaveis globais

int main() {

    //Operadores aritméticos: + - * / % ()

    int n3, n4; //variaveis locais
    int res;
    
    n1=90;
    n2=100;
    n3=9;
    n4=0;

    cout << "Digite sua nota 1 << ";
    cin >> n1;
    cout << "Digite digite sua nota 2 << ";
    cin >> n2;
    cout << "Digite sua nota 3 << ";
    cin >> n3;
    cout << "Digite sua nota 4 <<";
    cin >> n4;

    res= (n1 + n2 + n3 + n4)/4;

    cout << "Resultado da media de suas notas: " << res << endl;



    return 0;
}
