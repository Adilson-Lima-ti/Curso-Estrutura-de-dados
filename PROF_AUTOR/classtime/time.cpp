#include <iostream> // Para usar a função std::cout.
#include "time.h"

using namespace std; // Para escrever cout invés de std::cout.

/*
Getters
*/

Time::Time(int hour, int minute, int second){
    this->hour = hour;
    this->minute = minute;
    this->second = second;
}

int Time::gethour() const {
    return hour;
}
int Time::getminute() const{
    return minute;
}
int Time::getsecond() const{
    return second;
}
/*
Setterss
*/
void Time::sethour(int hour){ // this-> significa objeto atual
    this->hour = hour;    
}
void Time::setminute(int minute){
    this->minute = minute;
}
void Time::setsecond(int second){
    this->second = second;
}
void Time::print() const{
    cout << hour << " : " << minute << " : " << second << endl;
}
void Time::nextsecond(){
    second += 1;
    if (second >=60){
        second = 0;
        minute += 1;
    }
    if (minute >=60){
        minute = 0;
        hour +=1;
    }
    if (hour >= 24){
        hour = 0;
    }



}