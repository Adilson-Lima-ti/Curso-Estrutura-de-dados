#include "pilhadinamica.h"
#include <iostream>
#include <cstddef> // NULL

using namespace std;

    dStack::dStack()
    {
        structure = NULL;
    }

    
    dStack::~dStack()
    {
        NodeType* tempPtr;
        while (structure != NULL){
            tempPtr = structure;
            structure = structure -> next;
            delete tempPtr;
        }
    }

    bool dStack::isEmpty()
    {
        return ( structure == NULL);
    }

    bool dStack::isFull()
    {
        NodeType* location;
        try {
            location = new NodeType; // NoNovo = new No;
            delete location;
            return false;
        } catch(bad_alloc exception){
            return true;
        }
    }

    void dStack::push(ItemType item)
    {
        if (isFull()){
            cout << "A pilha está cheia!\n";
            cout << "Não foi possível inserir este elemento!\n";
        } else {
            NodeType* location = new NodeType; // No* NoNovo = new No;
            location->info = item;  // usamos a seta porque uma das variáveis do nó é ponteiro
            location->next = structure; //      "                  "
            structure = location;
        }
    }

    ItemType dStack::pop()
    {
        if (isEmpty()){
            cout << "A pilha está vazia!\n";
            cout << "Não foi possível remover nenhum elemento.\n";
            return 0;
        } else {
            NodeType* tempPtr;
            tempPtr = structure;
            ItemType item = structure->info;
            structure = structure-> next;
            delete tempPtr;
            return item;
        }
    }

    void dStack::print()
    {
        NodeType* tempPtr = structure;
        cout << "Pilha: [ ";
        while( tempPtr != NULL){
            cout << tempPtr->info << " ";
            tempPtr = tempPtr->next;
        }
        cout << "]\n";
    }


