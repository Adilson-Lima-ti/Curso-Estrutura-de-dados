  #include <iostream>
#include <math.h> 

using namespace std;

int main(){
    int a=5, b=2;
    
    int soma=a+b;
    cout << "Soma: " << soma << endl;
    
    cout << "Soma: " << a+b << endl; // Cálculo feito direto na impressão
    
    int sub=a-b;
    cout << "Subtração: " << sub << endl;
    
    int mult=a*b;
    cout << "Multiplicação: " << mult << endl;
    
    int quocdiv = a/b;
    cout << "Quociente da divisao: " << quocdiv << endl;
    
    int restodiv = a%b;
    cout << "Resto da divisao: " << restodiv << endl;
    
    float div = (float)a / (float)b;
    cout << "Divisao: " << div << endl;
    
    float pot = pow(a,b); // função potência "a^b" pow()  #include <math.h> 
    cout << "Potencia: " << pot << endl;
    
    //Incremento e Decremento
    cout << " a antigo: " << a << endl;
    a = a+1; // ou a+=1;

    cout << " a novo: " << a << endl;
    a++;
    cout <<" a com a++: " << a << endl;
    a--;
    cout <<" a com a--: " << a << endl;
    
    
    return 0;
}