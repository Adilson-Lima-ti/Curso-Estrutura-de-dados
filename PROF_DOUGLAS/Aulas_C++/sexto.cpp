#include <iostream>

using namespace std;

int main(){
    
    int n;
    cout << "Diga um número inteiro nao negativo\n";
    cin >> n;
    
    int soma=0;
    int cont=1;
    
    //while(cont <= n){
    //    soma+=cont;
    //    cont++;
    //}
    
    //do{ // Ao indicar o número 0 há um erro na saída pelo contador ser iniciado em 1
    //    soma+=cont;
    //    cont++;
    //}while (cont <= n);
    
    for(int j=1 ; j<=n ; j++){
    soma+=j;
    }
    
    cout << "A soma dos numeros de 0 ate " << n << " = " << soma << endl;
    
    
    
    
    return 0;
}