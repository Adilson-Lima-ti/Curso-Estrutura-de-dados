#include <iostream>
using namespace std;


class carro{
    private:
    int ano;
    float valor, km;
                                                                                                                 
    public:
    carro(int a, float v, float k);
    void setano(int a);
    int getano();
    void setvalor(float v);
    float getvalor();
    void setkm(float k);
    float getkm();


};



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


    carro::carro(int a=0, float v=-1, float k=-1){ // contrrutor
        ano = a;
        valor = v;
        km = k;
    } 

    void carro::setano(int a){
        ano = a; // ou this->ano = ano
    }
    
    int carro::getano(){
        return ano;
    }

    void carro::setvalor(float v){
        valor = v;
    }

    float carro::getvalor(){
        return valor;
    }
    void carro::setkm(float k){
        km = k;
    }
    float carro::getkm(){
        return km;
    }
