#include <iostream>
#include "pilhadinamica.h"

using namespace std;

int main(){
    dStack dStack1; 
    ItemType dStackitem;
    int option;

    cout << "<<<<---Programa gerador de pilha--->>> \n";

    do {
        cout << "<<<<=== Digite uma das opções abaixo ===>>>>\n";
        cout << "| 1 => INSERIR | 2 => REMOVER | 3 => IMPRIMIR | 0 => ENCERRAR\n";
        cin >> option;
        if (option == 1){
            cout << "Digite o elemento a ser inserido:\n";
            cin >> dStackitem;
            dStack1.push(dStackitem);
        } else if (option == 2){
            dStackitem = dStack1.pop();
            cout << "Elemento Removido: " << dStackitem << endl; 
        }else if (option == 3){
            dStack1.print();
        } 
    } while(option != 0);


    return 0;
}