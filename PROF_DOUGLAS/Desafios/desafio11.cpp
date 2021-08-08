#include <iostream>
using namespace std;


class cidadesbrasil{
    private:
    int ano;
    float populacao;
    
    public:
    cidadesbrasil(int a, float p);
    void setano(int a);
    int getano();
    void setpopulacao(float p);
    float getpopulacao();






};


int main(){


cidadesbrasil montealto(1881, 50000);
cout << "Cidade: Monte Alto\n";
cout <<"Ano de fundação: " << montealto.getano() << endl;
cout <<"População: " << montealto.getpopulacao() << endl;
cout << endl;

cidadesbrasil jaboticabal(1850, 100000);
cout << "Cidade: Jaboticabal\n";
cout <<"Ano de fundação: " << jaboticabal.getano() << endl;
cout <<"População: " << jaboticabal.getpopulacao() << endl;







    return 0;
}

cidadesbrasil::cidadesbrasil(int a=0, float p=0){
    ano = a;
    populacao = p;
}

void cidadesbrasil::setano(int a){
    ano = a;
}

int cidadesbrasil::getano(){
    return ano;
}

void cidadesbrasil::setpopulacao(float p){
    populacao = p;

}

float cidadesbrasil::getpopulacao(){
    return populacao;
}
