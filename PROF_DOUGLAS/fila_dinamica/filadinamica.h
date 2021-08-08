// Pilha Dinâmica = Dynamic Stack
#include "node_type.h"

class dQueue{
    private:
    NodeType* front; // primeiro
    NodeType* rear; // ultimo

    public:
    dQueue(); // Construtor
    ~dQueue(); // Destrutor
    bool isEmpty();
    bool isFull();
    void push(ItemType item);
    ItemType pop();
    void print();
};