#include <iostream>
#include "time.h"
using namespace std;

int main(){
/*
    Neste primeiro objeto, passamos todos os parâmetros. Em outras
    palavras, nenhum valor padrão foi usado.
    */
   
   Time t1(23, 59, 59);
   t1.print(); //23:59:59
   t1.sethour(12);
   t1.setminute(30);
   t1.setsecond(15);

   t1.print(); // 12:30:15
   cout <<" Hour:   " << t1.gethour() << endl;
   cout <<" Minute: " << t1.getminute() << endl;
   cout <<" Second: " << t1.getsecond() << endl;

   /* Nesta segunda estância, usamos o padrão apenas para minutos e segundos
   */


   Time t2(12);
   t2.print(); //12:00:00

   Time t3(23, 59, 58);
   t3.print(); // 23:59:58
   t3.nextsecond(); 
   t3.print(); // 23:59:59
   t3.nextsecond(); 
   t3.print(); //00:00:00






    return 0;
}