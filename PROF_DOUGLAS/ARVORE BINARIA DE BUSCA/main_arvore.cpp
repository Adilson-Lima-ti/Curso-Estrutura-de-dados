#include <iostream>
#include "arvorebinaria.h"

using namespace std;

int main(){
    SearchTree SearchTree;
    int opcao, ra, imp;
    string nome;
    bool busca = false;

    do{
        cout <<"Digite 0 para parar o algorítmo!\n";
        cout <<"Digite 1 para inserir um elemento!\n";
        cout <<"Digite 2 remover um elemento!\n";
        cout <<"Digite 3 para buscar um elemento!\n";
        cout <<"Digite 4 para imprimir a arvore!\n";
        cin >> opcao;
        
        if (opcao == 1){
            cout <<"Digite o nome do aluno: \n";
            cin >> nome;
            cout <<"Digite o RA do aluno: \n";
            cin >> ra;
            Aluno aluno(ra, nome);
            if (SearchTree.isFull()){
                cout << "Não foi possível inserir o elemento!\n";
            } else {
                SearchTree.insertAluno(aluno);
            } 

            } else if (opcao == 2){
                cout << "Digite o RA do aluno a ser removido!\n";
                cin >> ra;
                Aluno aluno(ra, " ");
                SearchTree.deleteAluno(aluno);
        }else if (opcao == 3){
            cout <<"Digite o RA do aluno a ser buscado!\n";
            cin >> ra;
            Aluno aluno(ra, " ");
            SearchTree.Search(aluno, busca);
            if (busca){
                cout <<"Elemento encontrado!\n";
                cout <<"nome: " << aluno.getName() << endl;
                cout <<"RA: " <<aluno.getRa() << endl;
            } else {
                cout <<"Elemento nao encontrado!\n";
            }
            
        }else if (opcao == 4){
            cout <<"Digite 1 para impressão em pre ordem!\n";
            cout <<"Digite 2 para impressao em ordem!\n";
            cout <<"Digite 3 para impressao em pos ordem!\n";
            cin >> imp;
            if (imp == 1){
                SearchTree.printPreOrder(SearchTree.getRoot());
            } else if (imp == 2){
                SearchTree.printInOrder(SearchTree.getRoot());
            } else {
                SearchTree.printPostOrder(SearchTree.getRoot());
            }
        } 
    }while (opcao != 0);
    return 0;
}