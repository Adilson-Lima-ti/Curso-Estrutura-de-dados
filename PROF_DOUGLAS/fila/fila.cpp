#include "fila.h"
#include <iostream>

using namespace std;

    Queue::Queue()
    {
        front = 0;
        back = 0;
        structure = new ItemType[MAX_ITEMS];
    }

    Queue::~Queue()
    {
        delete [] structure;
    }

    bool Queue::isFull() 
    {
        return (back-front == MAX_ITEMS);
    }

    bool Queue::isEmpty() // Vazio, se o valor do último for igual ao primeiro.
    {
        return (front == back);
    }

    void Queue::enqueue(ItemType item)
    {
        if (isFull()){
            cout << "A fila está cheia!\n";
            cout << "Esse elemento não pode ser inserido!\n";
        }else {
            structure[back % MAX_ITEMS] = item;
            back++;
        }
    }

    ItemType Queue::dequeue()
    {
        if(isEmpty()){
            cout << "A fila está vazia!\n";
            cout << "Nenhum elemento foi removido!\n";
            return 0;
        }else {
            front++;
            return structure[front-1 % MAX_ITEMS];
        }
    }

    void Queue::print()
    {
         cout << "Fila: [ ";
    for (int i=front ; i<back ; i++){
        cout << structure[i%MAX_ITEMS] << " ";
    }
    cout << " ]\n" ;
    }
