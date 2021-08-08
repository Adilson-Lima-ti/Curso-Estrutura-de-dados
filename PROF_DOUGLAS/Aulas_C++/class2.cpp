#include <iostream>
using namespace std;


class carro{
    private:
    int ano;
    float valor, km;
    public:
    
    carro(int a=0, float v=-1, float k=-1){ // contrrutor
        ano = a;
        valor = v;
        km = k;
    } 

    void setano(int a){
        ano = a; // ou this->ano = ano
    }
    
    int getano(){
        return ano;
    }

    void setvalor(float v){
        valor = v;
    }

    float getvalor(){
        return valor;
    }
    void setkm(float k){
        km = k;
    }
    float getkm(){
        return km;
    }
};

int main(){
    carro palio;
    palio.setano(1996);
    palio.setvalor(10000);
    palio.setkm(150000);
    
    cout << "Palio: \n";
    cout << "Ano: " << palio.getano() << endl;
    cout << "Valor: "<< palio.getvalor() << endl;
    cout << "Quilometragem: " << palio.getkm() << endl;
    
    carro celta;
    celta.setano(2000);
    celta.setvalor(12000);
    celta.setkm(95000);

    cout << "Celta: \n";
    cout << "Ano: " << celta.getano() << endl;
    cout << "Valor: " << celta.getvalor() << endl;
    cout << "Quilometragem: "<< celta.getkm() << endl;
    
    carro tracker(2008, 25000,150000); // usando a função construtorar
    cout << "Tracker: \n";
    cout << "Ano: " << tracker.getano() << endl;
    cout << "Valor: " << tracker.getvalor() << endl;
    cout << "Quilometragem: " << tracker.getkm() << endl;



    return 0;
}