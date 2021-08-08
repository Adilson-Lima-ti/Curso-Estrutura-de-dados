// Pilha Dinâmica = Dynamic Stack
#include "node_type.h"

class dStack{
    private:
    NodeType* structure; // P.D No* NoTopo (ponteiro para o próximo nó)


    public:
    dStack(); // Construtor
    ~dStack(); // Destrutor
    bool isEmpty();
    bool isFull();
    void push(ItemType item);
    ItemType pop();
    void print();
};