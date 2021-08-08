#include <iostream>
#include "aluno.h"

struct Node{
   Aluno aluno;
   Node* left;
   Node* right;
};

 
class SearchTree{
    private:
    Node* root;

    public:
    SearchTree();
    ~SearchTree();
    void deleteTree(Node* currentNode);
    Node* getRoot();
    bool isEmpty();
    bool isFull();
    void insertAluno(Aluno aluno);
    void deleteAluno(Aluno aluno);
    void removeSearch(Aluno aluno, Node*& currentNode);
    void deleteNode(Node*& currentNode);
    void getSuccessor(Aluno& alunoSuccessor, Node* temp);
    void Search(Aluno& aluno, bool& busca);
    void printPreOrder(Node* currentNode);
    void printInOrder(Node* currentNode);
    void printPostOrder(Node* currentNode);

};
