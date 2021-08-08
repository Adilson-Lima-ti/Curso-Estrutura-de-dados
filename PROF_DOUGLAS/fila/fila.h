#include "item_type.h"

const int MAX_ITEMS = 5;

class Queue {
    private:
    
    int front, back;
    ItemType* structure; 

    public:
    Queue(); // construtor
    ~Queue();// destrutor
    bool isFull(); // verifica se a pilha está cheia.
    bool isEmpty(); // verifica se a pilha está vazia.
    void enqueue(ItemType item); // Inserir item.
    ItemType dequeue(); // Remover item
    void print();
};