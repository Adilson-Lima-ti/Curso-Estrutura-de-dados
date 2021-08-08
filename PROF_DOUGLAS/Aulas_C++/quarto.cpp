#include <iostream>

using namespace std;

#define pi 3.14;
#define atl cout << "Adilson Teixeira Lima\n";
//int t; // variável global o valor vai alterando conforme a função

void inscrever(){ // void = função que não tem saída.
    cout << "Se inscreva no canal do\nProfessor Douglas Maioli!\n";
    
}

int somar(int &x, int &y){ // usando o & o valor altera na função principal
    int t;
    t=8; // esse valor vale apenas dentro dessa  função
    int soma;
    soma = x+y+t;
    x=30; // só altera o valor da primeira variável da função... se usar & antes na função
    return soma;
    
}

int main(){
    int t;
    
     t=0; // esse valor de t vale apenas dentro do int main
    
    inscrever();
    
    
    int a = 15, b = 5;
    int s;
    cout << "Valor da variável a antes da função : " << a << endl;
    s = somar(a,b);
    cout << "valor da varável a depois da função: "<< a << endl;
    
    cout << s << endl;
    cout << t << endl;
    
    atl;
    
    cout << pi;
 
    return 0;
}

