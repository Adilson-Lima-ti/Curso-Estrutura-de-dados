#include <iostream>
#include "cidades.h"

using namespace std;

int main(){

    cidadesbrasil montealto(1881, 50000);
cout << endl;
cout << "Cidade: Monte Alto\n";
cout <<"Ano de fundação: " << montealto.getano() << endl;
cout <<"População: " << montealto.getpopulacao() << endl;
cout << endl;

cidadesbrasil jaboticabal(1850, 100000);
cout << "Cidade: Jaboticabal\n";
cout <<"Ano de fundação: " << jaboticabal.getano() << endl;
cout <<"População: " << jaboticabal.getpopulacao() << endl;
cout << endl;

int* nova_pop = new int;

cout <<"Digite a quantidade de população a acrescentar: ";
cin >> *nova_pop;

cout << *nova_pop;
montealto.acrescentapopulacao(*nova_pop);
cout << "Cidade: Monte Alto\n";
cout <<"Ano de fundação: " << montealto.getano() << endl;
cout <<"População: " << montealto.getpopulacao() << endl;
cout << endl;
delete nova_pop;



    return 0;
}