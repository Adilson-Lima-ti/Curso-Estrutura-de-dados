#include "item_type.h"

const int MAX_ITEMS = 5;

class Stack {
    private:
    
    int length;
    ItemType* structure; 

    public:
    Stack(); // construtora
    ~Stack();// destrutora
    bool isFull(); // verifica se a pilha está cheia.
    bool isEmpty(); // verifica se a pilha está vazia.
    void push(ItemType item); // Inserir item.
    ItemType pop(); // Remover item
    void print();
    int isLength(); // Tamanho
};