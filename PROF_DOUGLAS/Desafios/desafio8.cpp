#include <iostream>
using namespace std;


int main(){
int tamanho, teste;

do {
    cout << "Digite o tamanho do vetor: \n";
    cin >> tamanho;
    float* vet = new float[tamanho];
for (int i=0 ; i<tamanho; i++){
    cout <<"Digite o elemento " << i+1 << " deste vetor\n";
    cin >> vet[i];
}
cout <<" o vetor inserido é :\n";
cout <<" [";
for (int i=0 ; i<tamanho ; i++){
cout << vet[i] << " ";
}
cout <<"]" << endl;

cout <<" Pra imprimir outro vetor Digite 1 ou 0 para encerrar.\n";
cin >> teste;

delete [] vet;
}while(teste!= 0);

    return 0;
}
