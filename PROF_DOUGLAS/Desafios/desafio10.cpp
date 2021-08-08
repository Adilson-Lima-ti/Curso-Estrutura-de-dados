#include <iostream>
using namespace std;

void replace(int* &point1, int* &point2){
    int temp;
    temp = *point1;
    *point1 = *point2;
    *point2 = temp;
  
 
}

int main(){
    int* point1 = new int;  
    *point1 = 5;
    int* point2 = new int;
    *point2 = 7;
cout <<"Pointer 1: " << point1 << " e " << *point1 << endl;
cout <<"Pointer 2: " << point2 << " e " << *point2 << endl;


replace(point1, point2);

    cout <<"Before Replacement\n";
    cout <<"Pointr 1: " << point1 << " e " << *point1 << endl;
    cout <<"Pointr 2: " << point2 << " e " << *point2 << endl;

    return 0;
}