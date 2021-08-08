#include <iostream>
#include "fila.h"

using namespace std;

int main(){
    Queue Queue1;
    ItemType queueitem;
    int option;

    cout << "<<<<---Programa gerador de fila--->>> \n";

    do {
        cout << "   <<<<<<<====== Digite uma das opções abaixo ======>>>>>>>\n";
        cout << "| 1 => INSERIR | 2 => REMOVER | 3 => IMPRIMIR | 0 => ENCERRAR\n";
        cin >> option;
        if (option == 1){
            cout << "Digite o elemento a ser inserido:\n";
            cin >> queueitem;

            Queue1.enqueue(queueitem);
        } else if (option == 2){
            queueitem = Queue1.dequeue();
            cout << "Elemento Removido: " << queueitem << endl; 
        }else if (option == 3){
            Queue1.print();
        } 
    } while(option != 0);






    return 0;
}