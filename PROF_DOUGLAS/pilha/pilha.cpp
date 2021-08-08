#include "pilha.h"
#include <iostream>

using namespace std;


Stack::Stack() // construtora
{ 
    length = 0;
    structure = new ItemType[MAX_ITEMS];
}

Stack::~Stack()// destrutora
{
    delete []structure;
}

bool Stack::isFull() // verifica se a pilha está cheia.
{
    return (length == MAX_ITEMS);
}

bool Stack::isEmpty() // verifica se a pilha está vazia.
{
    return ( length == 0);
}

void Stack::push(ItemType item)
{
  if (isFull()){
      cout << "A pilha está cheia!\n";
      cout << "Não é possível inserir este elemento!\n";
  } else {
        structure[length] = item;
        length++;
    }
}

ItemType Stack::pop() // Remover item
{
    if (isEmpty()){
        cout << "A pilha está vazia!\n";
        cout << "Não há elementos para ser removido!\n";
        return 0;
    } else {
        length--;
        return structure[length -1];
    }
}

void Stack::print()
{
    cout << "Pilha: [ ";
    for (int i=0 ; i < length; i++){
        cout << structure[i] << " ";
    }
    cout << " ]\n" ;
}

int Stack::isLength() // tamanho
{
    return length;
}
