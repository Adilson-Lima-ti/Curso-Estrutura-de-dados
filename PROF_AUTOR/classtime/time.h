
/* 
As primeiras linhas de código deste arquivo servem para evitar que multiplas definições de classe
Time ocorram. Isso poderia ocorrer se você der include de dois pacotes que dão include em "time.h"
*/

//#ifndef TIME_H //Inclua esse bloco apenas se TIME_H não está definido

//#define TIME_H // Na primeira inclusão, defina TIME_H para 
               //que este bloco não seja incl. mais de uma vez

class Time {
    private: //Seção privada
    // Membros privados
    int hour; // 0 - 23
    int minute; // 0 - 59
    int second; // 0 - 59

    public: // Seção Pública
    Time(int hour=0, int minute=0, int second=0); // Construtor
    int gethour() const;
    void sethour(int hour);
    int getminute() const ;
    void setminute(int minute);
    int getsecond() const;
    void setsecond(int second);
    void print() const;
    void nextsecond();
};


//#endif // Final do bloco "#ifndef"