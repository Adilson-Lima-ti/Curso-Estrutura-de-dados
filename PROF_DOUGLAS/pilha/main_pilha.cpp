#include <iostream>
#include "pilha.h"

using namespace std;

int main(){
    Stack Stack1;
    ItemType stackitem;
    int option;

    cout << "<<<<---Programa gerador de pilha--->>> \n";

    do {
        cout << "<<<<=== Digite uma das opções abaixo ===>>>>\n";
        cout << "| 1 => INSERIR | 2 => REMOVER | 3 => IMPRIMIR | 0 => ENCERRAR\n";
        cin >> option;
        if (option == 1){
            cout << "Digite o elemento a ser inserido:\n";
            cin >> stackitem;
            Stack1.push(stackitem);
        } else if (option == 2){
            stackitem = Stack1.pop();
            cout << "Elemento Removido: " << stackitem << endl; 
        }else if (option == 3){
            Stack1.print();
        } 
    } while(option != 0);


    return 0;
}