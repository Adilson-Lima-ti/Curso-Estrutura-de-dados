#include "filadinamica.h"
#include <iostream>
#include <cstddef> // NULL
#include <new>

using namespace std;

    dQueue::dQueue()
    {
        front = NULL;
        rear = NULL;
    }

    
    dQueue::~dQueue()
    {
        NodeType* tempPtr;
        while (front != NULL){
            tempPtr = front;
            front = front->next;
            delete tempPtr;
        }      
        rear = NULL;
    }

    bool dQueue::isEmpty()
    {
        return (front == NULL);  
    }

    bool dQueue::isFull()
    {
        NodeType* tempPtr;
        try{
            tempPtr = new NodeType;
            delete tempPtr;
            return false;
        } catch(bad_alloc exception){
            return true;
        }   
    }

    void dQueue::push(ItemType item)
    {
       if (isFull()){
           cout << "A Fila está cheia!\n";
           cout << "Nao foi possivel inserir este elemento!\n";
       } else{
           NodeType* newNode = new NodeType;
           newNode->info = item;
           newNode->next = NULL;
           if (front == NULL){
               front = newNode;
           } else{
               rear->next = newNode;
           }
           rear = newNode;

       }
    }
    ItemType dQueue::pop()
    {
        if(isEmpty()){
            cout << "A fila está vazia!\n";
            cout << "Não ha elemento para ser removido!\n";
            return 0;
        } else {
            NodeType* tempPtr = front;
            ItemType item = front-> info;
            front = front->next;
            if (front == NULL){
                rear = NULL;
            }
            delete tempPtr;
            return item;
        }
       
    }

    void dQueue::print()
    {
        NodeType* tempPtr = front;
        cout << "Fila: [ ";
        while( tempPtr != NULL){
             cout << tempPtr->info << " ";
            tempPtr = tempPtr->next;
        }
        cout << "]\n";
    }


