#include<bits/stdc++.h>
using namespace std;

/******************************************
 *  Author : Rohit Kishor Asegaonkar
 *  Created On : Mon Feb 14 2022 (Happy Valentine's Day)
 *  File : Method_Overriding_and_Hiding.cpp
 *  Contact : https://rohitasegaonkar.github.io/
 *******************************************/
class Car{
    public:
        void shiftGear(){}
        void f2(){}
};

class SportsCar:Car{
    public:
        void shiftGear(){} // Method Overriding
        void f2(int x){}   // Method Hiding
};
int main(){
    SportsCar obj;
    obj.shiftGear(); // SportsCar
   // obj.f2();        // ERROR
    obj.f2(7);       // SportsCar
    return 0;
}