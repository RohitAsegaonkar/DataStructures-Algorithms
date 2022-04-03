#include<bits/stdc++.h>
using namespace std;

/******************************************
 *  Author : Rohit Kishor Asegaonkar
 *  Created On : Wed Feb 16 2022
 *  File : DSCopy.cpp
 *  Contact : https://rohitasegaonkar.github.io/
 *******************************************/
class Dummy{
    int  a,b,*p;
    public:
        Dummy(){
            p = new int;
        }
        void setdata(int x, int y, int z){
            a = x; b = y;
            *p = z; 
        }
        void showdata(){
            cout<<a<<" "<<b<<" "<<*p<<endl;
        }
        Dummy(Dummy &d){                            // Copy Constructor
            a = d.a;
            b = d.b;
            p = new int;                            // Deep Copy 
            *p = *(d.p);
        }

};
int main(){
    Dummy d1;
    d1.setdata(3,4,5);
    Dummy d2 = d1;                                       /*Dummy d2 = d1; here copy constructor is called*/
    //d2 = d1;                                       // Here Copy assignment operator is called // Shallow Copying - only data members are copied here.
    d2.showdata();
    d2.setdata(6,7,8);
    d1.showdata();
    d2.showdata();
    return 0;
}