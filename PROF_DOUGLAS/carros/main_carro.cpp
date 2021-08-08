#include <iostream>
#include "carro.h"
using namespace std;


int main(){

 carro tracker(2008, 25000,150000); // usando a função construtorar
    cout << "Tracker: \n";
    cout << "Ano: " << tracker.getano() << endl;
    cout << "Valor: " << tracker.getvalor() << endl;
    cout << "Quilometragem: " << tracker.getkm() << endl;
    cout << endl;
    
    carro palio(1996, 10000, 150000);
    cout << "Palio: \n";
    cout << "Ano: " << palio.getano() << endl;
    cout << "Valor: "<< palio.getvalor() << endl;
    cout << "Quilometragem: " << palio.getkm() << endl;
    cout <<endl;

    carro celta(2000, 12000, 95000);
    cout << "Celta: \n";
    cout << "Ano: " << celta.getano() << endl;
    cout << "Valor: " << celta.getvalor() << endl;
    cout << "Quilometragem: "<< celta.getkm() << endl;
    cout << endl;




    return 0;
}