#include <iostream>
#include "hash.h"

using namespace std;


int main(){
    cout << "-->> PROGRAMA GERADOR DE HASH <<--\n";
    int tam_vetor, max;
    cout << "Digite o tamanho da Hash\n";
    cin >> tam_vetor;
    cout << "Digite o numero maximo de elementos!\n";
    cin >> max;
    cout << "O fator de carga e: " << (float)max /(float)tam_vetor << endl;
    Hash alunoHash(tam_vetor, max);
    int opcao;
    int ra;
    string nome;
    bool busca;

    do{
        cout << "Digite => |0 PARAR | 1 INSERIR |2 REMOVER |3 BUSCAR| 4 IMPRIMIR \n";
        cin >> opcao;

        if (opcao == 1){
            cout << "Qual e o RA do aluno?\n";
            cin >> ra;
            cout << "Qual e o nome do aluno?\n";
            cin >> nome;
            Aluno aluno(ra, nome);
            alunoHash.inserir(aluno);
        } else if (opcao == 2){
            cout << "Qual e o RA do aluno a se removido?\n";
            cin >> ra;
            Aluno aluno(ra, " ");
            alunoHash.deletar(aluno);
        } else if (opcao == 3){
            cout << "Qual o RA do aluno a ser buscado?\n";
            cin >> ra;
            Aluno aluno(ra, " ");
            alunoHash.buscar(aluno, busca);
            if (busca){
                cout << "Aluno encontrado: \n";
                cout << "RA: " << aluno.obterRa() << endl;
                cout << "Nome: " << aluno.obterNome() << endl;
            } else {
                cout << "Aluno nao encontrado!\n";
            }
        } else if (opcao == 4){
            alunoHash.imprimir();
        }

    } while (opcao != 0);



    return 0;
}
