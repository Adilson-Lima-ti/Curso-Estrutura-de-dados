#include <iostream>

using namespace std;

int main(){
    
    int inteiro;
    inteiro = 5;
    cout << inteiro << endl;
    
    float real;
    real = 5.2;
    cout << real << endl;
    
    
    double real2;
    real2 = 5.2e99;
    cout << real2 << endl;
    
    bool boleano;
    boleano = true;
    cout << boleano << endl; // boleano imprime 1 para true e 0 para false
    
    char letra; // char armazena apenas uma letra. e usamos 'aspas simples'
    letra = 'a';
    cout << letra << endl;
    
    string  palavra;
    palavra = "My computer";
    cout << palavra << endl;
    
    int idade; // Entrada de dados cin << 
    cout << "Qual sua idade?" << endl;
    cin >> idade;
    cout <<" A sua idade é:" << idade <<" anos." << endl;
    system("pause");
    
    return 0;
}