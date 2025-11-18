#include <iostream>

using namespace std;

int main () {

    //TIPO NOME;
    //TIPO NOME = VALOR;


    int vidas= 2; //10,25,  números inteiros positivos e negativos
    char letra='v'; //'a', caracteres isolados
    double decimal= 3.4; //2.9999
    float decimal2= 3.4; //2.5
    bool vivo= true; //true=verdadeiro / false=falso
    string texto= "vazio"; //"Bruno"

    cout <<"Digite o numero de vidas: ";
    cin >> vidas;

    cout <<"Digite uma letra: ";
    cin >> letra;

    cout <<"Digite um numero decimal: ";
    cin >> decimal;

    cout <<"Digite outro numero decimal: ";
    cin >> decimal2;

    cout <<"Voce esta vivo? (1 para sim, 0 para nao): ";
    cin >> vivo;

    cout <<"Digite um texto: ";
    cin >> texto;
    
    cout << endl;
    cout << "Vidas: " << vidas << endl;
    cout << "Letra: " << letra << endl;
    cout << "Decimal: " << decimal << endl;
    cout << "Decimal2: " << decimal2 << endl;
    cout << "Vivo: " << vivo << endl;
    cout << "Texto: " << texto << endl;
    
    return 0;
}