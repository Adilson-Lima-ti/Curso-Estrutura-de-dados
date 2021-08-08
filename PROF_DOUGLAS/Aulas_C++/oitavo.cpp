#include <iostream>
#include <cstddef>

using namespace std;

int main(){
    //ALOCAÇÃO ESTÁTICA = valor informado na criação (reservado)
    
    //int vet[4]; // declarando vetor com número de elementos
    //vet[0] = 5; //inserindo valores nos elementos
    //vet[1] = 10; //   "               "
    //int vet[4] = {5,10}; // cria vetor de 4 elementos armazena 
    // os dois indicados e os restantes como 0.

    //int vet[] = {5,10}; //cria um vetor de apenas 2 elementos
    //cout << vet[0] << " " <<  vet[1] << " " << vet[3] << endl;

// IMPRIMIR usando o For.
    //for (int i=0 ; i<4; i++ ){ // impressão padrão um embaixo do outro
    //    cout << vet[i] << endl; 
    //}
    //
    //
    // for (int i=0 ; i<4; i++ ){ // impressao na frente com um espaço
    //    cout << vet[i] << " ";
    //}
    //cout << endl;   // quebra de linha no final. para não quebrar em cada número
    //
    //cout << "[ ";
    //for (int i=0 ; i<4; i++){

    //    cout << vet[i] << " " ;
    //}
    //cout << "]" << endl;


    //int x = sizeof(vet); //sizeof = número total de bytes (cada inteiro tem 4 bytes)
    //cout << "Qtd de elementos do vetor: vet: " << x /4 << endl;

    //ALOCAÇÃO DINÃMICA - reserva feita em tempo de processamento
    int tamanho;
    cout << "Digite o tamanho do vetor! " << endl;
    cin >> tamanho;
    int* vetor = new int[tamanho];

    //para usuário digitar o valor
    for (int i=0 ; i<tamanho; i++){
        cout << "Digite o elemento " << i+1 << " do vetor: " << endl;
        cin >> vetor[i];
    }

    cout << "[ ";
    for (int i=0; i<tamanho ; i++){
        cout << vetor[i] << " ";
    }
    cout << "]" << endl;





    return 0;
}