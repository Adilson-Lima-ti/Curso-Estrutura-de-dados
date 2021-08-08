#include <iostream>
#include <cstddef>
using namespace std;

    int main(){
        int var1;
        int* pont1;
        var1 = 5;
        pont1=&var1;

        cout << "Valor da variável, através do seu nome: " << var1 << endl;
        cout << "Endereco armazenado no ponteiro 'pont1 ': " << pont1 << endl; // Endereco do primeiro byte da varivel
        cout << "Valor da variavel, atraves do ponteiro: "<< *pont1 << endl;

        //int var2;
        //var2 = var1;
        //var2 = *pont1;
        //cout << var2 << endl;

        //var1=30;
        //*pont1 = 30; // mudar o valor da variável através do ponteiro.
        //cout << var1 << endl;

        //var2 = 50;
        //pont1 = &var2;
        //cout << *pont1 << endl;
        
        //int* pont2;
        //pont2 = NULL;
        //cout << *pont2 << endl;

        int* pont3 = new int;
        *pont3 = 35;
        cout << "*pont3 (Valor): " << *pont3 << endl;
        cout << "pont3 (endereço): " << pont3 << endl;

        *pont3 = *pont1; // *pont3 recebe o valor de *pont1 
        cout << "*pont3: (valor após receber o valor de *pont1: ) " << *pont3 << endl;
        delete pont3;
        cout << "Valor de pont3 após delete: " << *pont3 << endl;
        pont3 = pont1;
        int* pont4 = pont1;
        cout << "pont4: " << *pont4 << " => " << pont4 << endl;

        return 0;
    }