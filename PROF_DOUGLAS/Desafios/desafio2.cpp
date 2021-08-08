#include <iostream>

using namespace std;

int main(){
float n1, n2, n3, medturma;


cout << "Digite a nota 1: ";
cin >> n1;
cout << "Digite a nota 2: ";
cin >> n2;
cout << "Digite a nota 3: ";
cin >> n3;
cout <<"Digite a media da turma: ";
cin >> medturma;
float media = (n1+n2+n3)/3 ;

cout << "A media final do aluno e: " << media << endl;
if (media < medturma){
cout << "O aluno esta abaixo da media!\n";
}else if (media == medturma){
    cout <<"Voce esta na media\n";

}else{ 
    cout << "Voce esta acima da media\n";
}

    return 0;
}