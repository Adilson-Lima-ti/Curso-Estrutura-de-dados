#include <iostream>
#include "filadinamica.h"

using namespace std;

int main(){
    dQueue dQueue1; 
    ItemType dQueueItem;
    int option;

    cout << "<<<<---Programa gerador de Fila--->>> \n";

    do {
        cout << "<<<<=== Digite uma das opções abaixo ===>>>>\n";
        cout << "| 1 => INSERIR | 2 => REMOVER | 3 => IMPRIMIR | 0 => ENCERRAR\n";
        cin >> option;
        if (option == 1){
            cout << "Digite o elemento a ser inserido:\n";
            cin >> dQueueItem;
            dQueue1.push(dQueueItem);
        } else if (option == 2){
            dQueueItem = dQueue1.pop();
            cout << "Elemento Removido: " << dQueueItem << endl; 
        }else if (option == 3){
            dQueue1.print();
        } 
    } while(option != 0);


    return 0;
}