#include <iostream>
using namespace std;


int main(){

int* idade1 = new int;
int* idade2 = new int;

cout << "Digite a idade da pessoa 1: \n";
cin >> *idade1;
cout << "Digite a idade da pessoa 2: \n";
cin >> *idade2;

float* media = new float;
*media = (*idade1 + *idade2) / 2;
cout <<"A média das idades é: " << *media << endl; 
delete idade1;
delete idade2;
delete media;



    return 0;
}
