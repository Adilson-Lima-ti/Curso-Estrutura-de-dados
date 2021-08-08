#include <iostream>
using namespace std;


int main(){

int l=0, c=0;

cout << "Digite o número de linhas das Matrizes!\n";
cin >> l;
cout << "Digite o número de colunas das Matrizes!\n";
cin >> c;

float matriz1[l][c], matriz2[l][c];
cout <<"Digite os Elementos da matriz 1:\n";

for (int i=0 ; i<l ; i++){
    for (int j=0 ; j<c ; j++){
        cout << "Digite o elemento da linha " << i+1 << " e coluna " << j+1 << " : ";
        cin >> matriz1[i][j];
    }
}
cout <<"Digite os Elementos da matriz 2:\n";
for (int i=0 ; i<l ; i++){
    for (int j=0 ; j<c ; j++){
        cout << "Digite o elemento da linha " << i+1 << " e coluna " << j+1 << " : ";
        cin >> matriz2[i][j];
    }
}
cout << " Os valores da soma das matrizes são:\n";

float matrizsoma[l][c];

for (int i=0 ; i<l ; i++){
    for (int j=0 ; j<c; j++){
        matrizsoma[i][j] = matriz1[i][j]+ matriz2[i][j];
    }
}


for (int i=0 ; i<l ; i++){
    for (int j=0 ;j<c ; j++){
        cout << matrizsoma[i][j] << " ";
    }
    cout << endl;
}



    return 0;
}


