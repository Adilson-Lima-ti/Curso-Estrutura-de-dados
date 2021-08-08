#include <iostream>
using namespace std;

int fat(int x){
int fatorial=1;
for (int i=1; i<=x; i++){
    fatorial*=i;
}
    return fatorial;
}
int main(){
    int n;
    while (true){
    cout << "Informe um número positivo!\n" ;
    cin >> n;
    if ( n <= 0){
        cout << "O numero informado é negativo!\n";
    } else {
    break;
    }
}

int numero = fat(n);

cout << " Fatorial de " << n << " é igual a : " << numero << endl;


    return 0;

}



