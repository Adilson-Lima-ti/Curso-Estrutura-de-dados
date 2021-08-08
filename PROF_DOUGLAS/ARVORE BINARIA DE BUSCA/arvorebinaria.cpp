#include <iostream>
#include <cstddef>
#include "arvorebinaria.h"

using namespace std;


    SearchTree::SearchTree() //Construtor
    {
        root = NULL;
    }

    SearchTree::~SearchTree()
    {
        deleteTree(root);
    }

    void SearchTree::deleteTree(Node* currentNode)
    {
        if (currentNode != NULL){
            deleteTree(currentNode->left);
            deleteTree(currentNode->right);
            delete currentNode;
        }
    }

    Node* SearchTree::getRoot()
    {
        return root;
    }

    bool SearchTree::isEmpty()
    {
        return (root == NULL);
    }

    bool SearchTree::isFull()
    {
        try{
            Node* temp = new Node;
            delete temp;
            return false;
        }catch (bad_alloc exception){
            return true;
        }
    }

    void SearchTree::insertAluno(Aluno aluno)
    {
        if (isFull()){ // verifca se /cheia ( apenas se a memória disponivel /sistema suporta o aumento) a arvore não é limitada.
            cout << "A Arvore está cheia!\n";
            cout << "Não foi possivel inserir este elemento\n";
        } else {
            Node* newNode = new Node; // Criua novo Nó
            newNode->aluno = aluno; // recebido na função
            newNode->left = NULL; // começa vazio
            newNode->right = NULL; // começa vazio
            if (root == NULL){ // a arvore está vazia?
                root = newNode; // recebe o no novo
            }else { // caso contrario não está vazia
                Node* temp = root; // cria nó temporario e aponta para a raiz
                while (temp != NULL){ // procura até achar um nó vazio (NULL) começando pela raiz apontada pelo temp
                    if (aluno.getRa() < temp->aluno.getRa()){ // se Ra aluno a inserir é menor que comparado
                        if (temp->left == NULL){// se o filho a esquerda é NULL  
                            temp->left = newNode; // aponta para o nó novo
                            break;
                        }else {
                            temp = temp->left; // se não estiver vazio o NO temp aponta para esse para RETORNAR a comparação
                        }
                    } else{
                        if (temp->right == NULL){ // se o filho a direita é NULL  
                            temp->right = newNode;// aponta para o nó novo
                            break;
                        } else {
                            temp = temp->right;// se não estiver vazio o NO temp aponta para esse para RETORNAR a comparação
                        }
                        //  o nó ja criado no começo, a OPERAÇÃO consiste em achar quem vai apontar
                    }
                }
            }
        }
    }

    void SearchTree::deleteAluno(Aluno aluno)
    {
        removeSearch(aluno, root);
    }

    void SearchTree::removeSearch(Aluno aluno, Node*& currentNode) // ver se caso 1, 2 ou 3
    {
        if (aluno.getRa() < currentNode->aluno.getRa()){ //compara aluno é menor que  com nó atual
            removeSearch(aluno, currentNode->left);  // vai para esquerda  e recursivamente compara denovo
        }else if (aluno.getRa()> currentNode->aluno.getRa()){ // se for maior 
            removeSearch(aluno, currentNode->right); // vai para direita 
        } else { // se não é maior nem menos é igual
            deleteNode(currentNode); // função criada abaixo
        }
    }

    void SearchTree::deleteNode(Node*& currentNode) // deletar nó atual //OPERAÇÃO FEITO POR ENDEREÇO  e não por nome..
    {
        Node* temp = currentNode; // cria ponteiro para um nó temporário, para guardar o endereço a ser deletado qdo ele for desconectado da arvore.
        if (currentNode->left == NULL){ // se o filho a esquerda NULL... 
            currentNode = currentNode->right; // nó atual recebe  o endereço para o filho da direita
            delete temp; // deleta temp... o endereço guardado no inicio
        } else if (currentNode->right == NULL){ // se o filho da direita for NULL
            currentNode = currentNode->left; // o no atual recebe o endereço da esquerda
            delete temp; // deleta temp .. o endereço guardado no início
        } else {
            Aluno AlunoSuccessor; // criar aluno  vazio... para guardar o valor
            getSuccessor(AlunoSuccessor, currentNode); // caso 3 ( tem dois filhos) entrada aluno sucessor 
            // recebido pela função getSuccessor 
            currentNode->aluno = AlunoSuccessor; // recebe o valor a ser trocado aluno do nó atual recebe o end sucessor
            removeSearch(AlunoSuccessor, currentNode->right); //buscar o sucessor a partir da direita remover o valor igual 
        }
    }

    void SearchTree::getSuccessor(Aluno& alunoSuccessor, Node* temp) //ober o valor que esta no sucessor
    {
        temp = temp->right; // um passo a direita( recebe o filho a direita)
        while (temp->left != NULL){ // aponta descendo até chegar um NULL 
            temp = temp->left; // o temp  ( que apontava para ele) passa apontar para o filho a esquerda dele... 
        }
        alunoSuccessor = temp->aluno; // alunosucessor recebe o aluno do aluno -> temp
    }

    void SearchTree::Search(Aluno& aluno, bool& busca)
    {
        busca = false;
        Node* currentNode = root;
        while (currentNode != NULL){ // verifica se o nó não está vazio/ se tiver vazio retorna false (não encontrou)
            if (aluno.getRa() < currentNode->aluno.getRa()){ // RA atual (da busca ) for menor RA NÓ (comparado) 
                currentNode = currentNode->left; // o no atual aponta para a esquerda e começa de novo a comparar
            } else if(aluno.getRa() > currentNode->aluno.getRa()){ // Se for maior  
                currentNode = currentNode->right; // aponta para o NÓ da direita
            } else { // se não for MENOR  e nem MAIOR ... é igual... ENCONTROU
                busca = true; // RETORNA true... encontrei
                aluno = currentNode->aluno; // O aluno do NÓ atual... recebe o aluno do nó encontrado
                break;
            }
        }
    }

    void SearchTree::printPreOrder(Node* currentNode) // visita (imprime) depois left depois right
    {
        if (currentNode != NULL){
            cout << currentNode->aluno.getName() << ": "; // visita/ imprimir
            cout << currentNode->aluno.getRa() << endl;

            printPreOrder(currentNode->left); // chama recursiva(visita desce  left até achar NULL) 
            printPreOrder(currentNode->right); // chama recursiva (visita até achar NULL)
        }
    }

    void SearchTree::printInOrder(Node* currentNode) 
    {
        if (currentNode != NULL){
            printInOrder(currentNode->left); // chama a função para a esquerda (recursivamente)

            cout << currentNode->aluno.getName() << ": "; // imprime
            cout << currentNode->aluno.getRa() << endl;

            printInOrder(currentNode->right);// chama a função para direita (recursivamente)

        }
    }
 
    void SearchTree::printPostOrder(Node* currentNode)
    {
        if (currentNode != NULL){
            printPostOrder(currentNode->left); // chama a função para a esquerda (recursivamente)
            printPostOrder(currentNode->right);// chama a função para a direita (recursivamente)

            cout << currentNode->aluno.getName() << ": "; // Imprime
            cout << currentNode->aluno.getRa() << endl;

        }
    }


