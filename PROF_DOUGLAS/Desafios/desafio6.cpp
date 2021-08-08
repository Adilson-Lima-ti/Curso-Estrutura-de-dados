#include <iostream>
using namespace std;

int main(){

int nfamilia;
cout << "Digite o número de famílias.\n";
cin >> nfamilia;
float* familia =  new float[nfamilia];
float media=0;
for (int i=0 ; i<nfamilia ; i++){
    cout << "Digite os gastos da família número " << i+1 << "!\n";
    cin >> familia[i];
    media+= familia[i];
}

media = media/nfamilia;
cout << "Média de gastos:R$ " << media << endl; 
for (int j=0 ; j<nfamilia ; j++){
    if (familia[j]< media){
        cout << " Os gastos da familia " << j+1 << " foram: R$" << familia[j] << " e está abaixo da média.\n";
    }else if (familia[j]== media){
            cout << " Os gastos da familia " << j+1 << " foram: R$" << familia[j] << " e está na média.\n";
    } else {
        cout << " Os gastos da familia " << j+1 << " foram: R$" << familia[j] << " e está acima da média.\n";
   }
}

    return 0;
}